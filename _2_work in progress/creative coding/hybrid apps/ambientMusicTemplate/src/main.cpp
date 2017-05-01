/*
 
#N canvas 0 23 1280 664 10;
#X obj 599 310 readsf~ 4 1e+06;
#X msg 346 292 stop;
#X obj 599 366 dac~ 1 2;
#X obj 346 269 bng 15 250 50 0 empty empty empty 17 7 0 10 -262144
-1 -1;
#X msg 448 284 open ./sounds/musica_concerto.wav \, start;
#X obj 724 251 adc~ 1;
#X obj 599 338 *~ 0.6;
#X obj 658 337 *~ 0.6;
#X obj 715 336 +~;
#X obj 724 286 delwrite~ delay1 8000;
#X obj 730 310 delread~ delay1 8000;
#X obj 883 253 adc~ 1;
#X obj 874 338 +~;
#X obj 883 288 delwrite~ delay2 40000;
#X obj 889 312 delread~ delay2 40000;
#X obj 448 266 bng 15 250 50 0 empty empty empty 17 7 0 10 -262144
-1 -1;
#X obj 448 245 receive ofxA;
#X obj 346 244 receive ofxB;
#X connect 0 0 6 0;
#X connect 0 1 7 0;
#X connect 0 2 7 0;
#X connect 0 3 6 0;
#X connect 1 0 0 0;
#X connect 3 0 1 0;
#X connect 4 0 0 0;
#X connect 5 0 9 0;
#X connect 6 0 2 0;
#X connect 7 0 2 1;
#X connect 8 0 2 0;
#X connect 8 0 2 1;
#X connect 10 0 8 1;
#X connect 11 0 13 0;
#X connect 12 0 2 0;
#X connect 12 0 2 1;
#X connect 14 0 12 1;
#X connect 15 0 4 0;
#X connect 16 0 15 0;
#X connect 17 0 3 0;

*/

#include "ofMain.h"
#include "ofxPd.h"

bool toca = true;
int speed = 1;

class ofApp : public ofBaseApp, public pd::PdReceiver, public pd::PdMidiReceiver {
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofVideoPlayer 		fingerMovie;
    bool                frameByframe;
    
   void audioReceived(float * input, int bufferSize, int nChannels);
   void audioRequested(float * output, int bufferSize, int nChannels);

    ofxPd pd;
    
};


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetVerticalSync(true);
    frameByframe = false;
    
    fingerMovie.load("video/concert_video.mov");
    fingerMovie.setLoopState(OF_LOOP_NORMAL);
    fingerMovie.play();
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    // the number of libpd ticks per buffer,
    // used to compute the audio buffer len: tpb * blocksize (always 64)
#ifdef TARGET_LINUX_ARM
    // longer latency for Raspberry PI
    int ticksPerBuffer = 32; // 32 * 64 = buffer len of 2048
    
    // you'll need a USB mic on the Raspberry PI and may need to set the audio device,
    // otherwise this app won't really do anything without an incoming audio signal ...
    int numInputs = 0; // no built in mic, change this if you have a USB mic
#else
    int ticksPerBuffer = 8; // 8 * 64 = buffer len of 512
    int numInputs = 1;
#endif
    
    ofSoundStreamSetup(2, numInputs, this, 44100, ofxPd::blockSize()*ticksPerBuffer, 3);
    
    if(!pd.init(2, numInputs, 44100, ticksPerBuffer)) {OF_EXIT_APP(1);}
    
    pd.start();
    pd::Patch p = pd.openPatch("pd-patch/cena.pd");
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
    
    fingerMovie.setSpeed(speed);
    fingerMovie.setPaused(toca);
}

//--------------------------------------------------------------
void ofApp::audioReceived(float * input, int bufferSize, int nChannels) {
    pd.audioIn(input, bufferSize, nChannels);
}

//--------------------------------------------------------------
void ofApp::audioRequested(float * output, int bufferSize, int nChannels) {
    pd.audioOut(output, bufferSize, nChannels);
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    if (key == 'p') {
        pd.sendBang("ofxA");
        toca = false;
        speed = 1;
    }
    else if (key == 's') {
        pd.sendBang("ofxB");
        toca = true;
        speed = 0;
    }
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


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
