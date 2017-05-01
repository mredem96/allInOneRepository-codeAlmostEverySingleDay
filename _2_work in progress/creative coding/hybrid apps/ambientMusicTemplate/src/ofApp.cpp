#include "ofApp.h"
#include "ofxPd.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetVerticalSync(true);
    frameByframe = false;
    
    // Uncomment this to show movies with alpha channels
    // fingerMovie.setPixelFormat(OF_PIXELS_RGBA);
    
    fingerMovie.load("video/concert_video.mov");
    fingerMovie.setLoopState(OF_LOOP_NORMAL);
    fingerMovie.play();
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    //ofSetLogLevel("Pd", OF_LOG_VERBOSE); // see verbose info inside
    
    // double check where we are ...
    cout << ofFilePath::getCurrentWorkingDirectory() << endl;
    
    // the number of libpd ticks per buffer,
    // used to compute the audio buffer len: tpb * blocksize (always 64)
#ifdef TARGET_LINUX_ARM
    // longer latency for Raspberry PI
    int ticksPerBuffer = 32; // 32 * 64 = buffer len of 2048
    int numInputs = 0; // no built in mic
#else
    int ticksPerBuffer = 8; // 8 * 64 = buffer len of 512
    int numInputs = 1;
#endif
    
    // setup OF sound stream
    ofSoundStreamSetup(2, numInputs, this, 44100, ofxPd::blockSize()*ticksPerBuffer, 3);
    
    // setup Pd
    //
    // set 4th arg to true for queued message passing using an internal ringbuffer,
    // this is useful if you need to control where and when the message callbacks
    // happen (ie. within a GUI thread)
    //
    // note: you won't see any message prints until update() is called since
    // the queued messages are processed there, this is normal
    //
    if(!pd.init(2, numInputs, 44100, ticksPerBuffer, false)) {
        OF_EXIT_APP(1);
    }
    
    midiChan = 1; // midi channels are 1-16
    
    // subscribe to receive source names
    pd.subscribe("toOF");
    pd.subscribe("env");
    
    // add message receiver, required if you want to recieve messages
    pd.addReceiver(*this); // automatically receives from all subscribed sources
    pd.ignoreSource(*this, "env");        // don't receive from "env"
    //pd.ignoreSource(*this);             // ignore all sources
    //pd.receiveSource(*this, "toOF");	  // receive only from "toOF"
    
    // add midi receiver, required if you want to recieve midi messages
    pd.addMidiReceiver(*this); // automatically receives from all channels
    //pd.ignoreMidiChannel(*this, 1);     // ignore midi channel 1
    //pd.ignoreMidiChannel(*this);        // ignore all channels
    //pd.receiveMidiChannel(*this, 1);    // receive only from channel 1
    
    // add the data/pd folder to the search path
    pd.addToSearchPath("pd/abs");
    
    // audio processing on
    pd.start();
    
    // -----------------------------------------------------
    cout << endl << "BEGIN Patch Test" << endl;
    
    // open patch
    pd::Patch patch = pd.openPatch("pd/test.pd");
    cout << patch << endl;
    
    // close patch
    pd.closePatch(patch);
    cout << patch << endl;
    
    // open patch again
    patch = pd.openPatch(patch);
    cout << patch << endl;
    
    cout << "FINISH Patch Test" << endl;
    
    // -----------------------------------------------------
    cout << endl << "BEGIN Message Test" << endl;
    
    // test basic atoms
    pd.sendBang("fromOF");
    pd.sendFloat("fromOF", 100);
    pd.sendSymbol("fromOF", "test string");
    
    // stream interface
    pd << Bang("fromOF");
    pd << Float("fromOF", 100);
	pd << Symbol("fromOF", "test string");
    
    // send a list
    pd.startMessage();
    pd.addFloat(1.23);
    pd.addSymbol("a symbol");
    pd.finishList("fromOF");
    
    // send a message to the $0 receiver ie $0-fromOF
    pd.startMessage();
    pd.addFloat(1.23);
    pd.addSymbol("a symbol");
    pd.finishList(patch.dollarZeroStr()+"-fromOF");
    
    // send a list using the List object
    pd::List testList;
    testList.addFloat(1.23);
    testList.addSymbol("sent from a List object");
    pd.sendList("fromOF", testList);
    pd.sendMessage("fromOF", "msg", testList);
    
    // stream interface for list
    pd << StartMessage() << 1.23 << "sent from a streamed list" << FinishList("fromOF");
    
    cout << "FINISH Message Test" << endl;
    
    // -----------------------------------------------------
    cout << endl << "BEGIN MIDI Test" << endl;
    
    // send functions
    pd.sendNoteOn(midiChan, 60);
    pd.sendControlChange(midiChan, 0, 64);
    pd.sendProgramChange(midiChan, 100);    // note: pgm num range is 1 - 128
    pd.sendPitchBend(midiChan, 2000);   // note: ofxPd uses -8192 - 8192 while [bendin] returns 0 - 16383,
    // so sending a val of 2000 gives 10192 in pd
    pd.sendAftertouch(midiChan, 100);
    pd.sendPolyAftertouch(midiChan, 64, 100);
    pd.sendMidiByte(0, 239);    // note: pd adds +2 to the port number from [midiin], [sysexin], & [realtimein]
    pd.sendSysex(0, 239);       // so sending to port 0 gives port 2 in pd
    pd.sendSysRealTime(0, 239);
    
    // stream
    pd << NoteOn(midiChan, 60) << ControlChange(midiChan, 100, 64);
    pd << ProgramChange(midiChan, 100) << PitchBend(midiChan, 2000);
    pd << Aftertouch(midiChan, 100) << PolyAftertouch(midiChan, 64, 100);
    pd << StartMidi(0) << 239 << Finish();
    pd << StartSysex(0) << 239 << Finish();
	pd << StartSysRealTime(0) << 239 << Finish();
    
    cout << "FINISH MIDI Test" << endl;
    
    // -----------------------------------------------------
    cout << endl << "BEGIN Array Test" << endl;
    
    // array check length
    cout << "array1 len: " << pd.arraySize("array1") << endl;
    
    // read array
    std::vector<float> array1;
    pd.readArray("array1", array1);	// sets array to correct size
    cout << "array1 ";
    for(int i = 0; i < array1.size(); ++i)
        cout << array1[i] << " ";
    cout << endl;
    
    // write array
    for(int i = 0; i < array1.size(); ++i)
        array1[i] = i;
    pd.writeArray("array1", array1);
    
    // ready array
    pd.readArray("array1", array1);
    cout << "array1 ";
    for(int i = 0; i < array1.size(); ++i)
        cout << array1[i] << " ";
    cout << endl;
    
    // clear array
    pd.clearArray("array1", 10);
    
    // ready array
    pd.readArray("array1", array1);
    cout << "array1 ";
    for(int i = 0; i < array1.size(); ++i)
        cout << array1[i] << " ";
    cout << endl;
    
    cout << "FINISH Array Test" << endl;
    
    // -----------------------------------------------------
    cout << endl << "BEGIN PD Test" << endl;
    
    pd.sendSymbol("fromOF", "test");
    
    cout << "FINISH PD Test" << endl;
    
    // -----------------------------------------------------
    cout << endl << "BEGIN Instance Test" << endl;
    
    // open 10 instances
    for(int i = 0; i < 10; ++i) {
        pd::Patch p = pd.openPatch("pd/instance.pd");
        instances.push_back(p);
    }
    
    // send a hello bang to each instance individually using the dollarZero
    // to [r $0-instance] which should print the instance dollarZero unique id
    // and a unique random number
    for(int i = 0; i < instances.size(); ++i) {
        pd.sendBang(instances[i].dollarZeroStr()+"-instance");
    }
    
    // send a random float between 0 and 100
    for(int i = 0; i < instances.size(); ++i) {
        pd.sendFloat(instances[i].dollarZeroStr()+"-instance", int(ofRandom(0, 100)));
    }
    
    // send a symbol
    for(int i = 0; i < instances.size(); ++i) {
        pd.sendSymbol(instances[i].dollarZeroStr()+"-instance", "howdy dude");
    }
    
    // close all instances
    for(int i = 0; i < instances.size(); ++i) {
        pd.closePatch(instances[i]);
    }
    instances.clear();
    
    cout << "FINISH Instance Test" << endl;
    
    // -----------------------------------------------------
    // play a tone by sending a list
    // [list tone pitch 72 (
    pd.startMessage();
    pd.addSymbol("pitch");
    pd.addFloat(72);
    pd.finishList("tone");
    pd.sendBang("tone");
}

//--------------------------------------------------------------
void ofApp::update(){
    fingerMovie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetHexColor(0xFFFFFF);
    
    fingerMovie.draw(0,0);
    ofPixels & pixels = fingerMovie.getPixels();
    
    int vidWidth = pixels.getWidth();
    int vidHeight = pixels.getHeight();
    int nChannels = pixels.getNumChannels();
    
    fingerMovie.setSpeed(1);
    fingerMovie.setPaused(false);
    

}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
