#include "ofxSuperCollider.h"
#include "ofxSCexit.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    void exit();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    ofxSCSynth	*playbuf;
    ofxSCSynth	*playbufvoz;
    ofxSCSynth	*soundinput;
    ofxSCBuffer	*buffer;
    ofxSCBuffer	*buffervoz;
};

void ofApp::setup(){
    ofSetLogLevel(OF_LOG_VERBOSE);
    buffer = new ofxSCBuffer();
    buffer->read(ofToDataPath("II.wav", true));
    buffervoz = new ofxSCBuffer();
    buffervoz->read(ofToDataPath("poemaI.wav", true));
    playbuf = new ofxSCSynth("playbuf_1");
    playbuf->set("bufnum", buffer->index);
    playbuf->set("amp", 1);
    playbufvoz = new ofxSCSynth("playbuf_1");
    playbufvoz->set("bufnum", buffervoz->index);
    playbufvoz->set("amp", 1);
    soundinput = new ofxSCSynth("audioIn");
}

//--------------------------------------------------------------
void ofApp::update(){}

//--------------------------------------------------------------
void ofApp::draw(){}

//--------------------------------------------------------------
void ofApp::exit(){
    soundinput->free(); playbuf->free();
    playbufvoz->free(); buffer->free();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key){
        case '1':
            playbuf->free();
            buffer->read(ofToDataPath("I.wav", true));
            playbuf->set("bufnum", buffer->index);
            playbuf->create();
            playbufvoz->free();
            buffervoz->read(ofToDataPath("poemaI.wav", true));
            playbufvoz->set("bufnum", playbufvoz->index);
            playbufvoz->create();
            soundinput->free();
            soundinput->create();
            break;
        case '2':
            playbuf->free();
            buffer->read(ofToDataPath("II.wav", true));
            playbuf->set("bufnum", buffer->index);
            playbuf->create();
            playbufvoz->free();
            buffervoz->read(ofToDataPath("poemaII.wav", true));
            playbufvoz->set("bufnum", playbufvoz->index);
            playbufvoz->create();
            soundinput->free();
            soundinput->create();
            break;
        case '3':
            playbuf->free();
            buffer->read(ofToDataPath("III.wav", true));
            playbuf->set("bufnum", buffer->index);
            playbuf->create();
            playbufvoz->free();
            buffervoz->read(ofToDataPath("poemaIII.wav", true));
            playbufvoz->set("bufnum", playbufvoz->index);
            playbufvoz->create();
            soundinput->free();
            soundinput->create();
            break;
        case '4':
            playbuf->free();
            buffer->read(ofToDataPath("IV.wav", true));
            playbuf->set("bufnum", buffer->index);
            playbuf->create();
            playbufvoz->free();
            buffervoz->read(ofToDataPath("poemaIV.wav", true));
            playbufvoz->set("bufnum", playbufvoz->index);
            playbufvoz->create();
            soundinput->free();
            soundinput->create();
            break;
        case '5':
            playbuf->free();
            buffer->read(ofToDataPath("V.wav", true));
            playbuf->set("bufnum", buffer->index);
            playbuf->create();
            playbufvoz->free();
            buffervoz->read(ofToDataPath("poemaV.wav", true));
            playbufvoz->set("bufnum", playbufvoz->index);
            playbufvoz->create();
            soundinput->free();
            soundinput->create();
            break;
        case 's':
            playbuf->free();
            playbufvoz->free();
            soundinput->free();
            break;

        case 'f':
            ofToggleFullscreen();
            break;
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
	ofSetupOpenGL(1200,1200,OF_WINDOW);
	ofRunApp(new ofApp());

}
