#include "ofApp.h"

ofVec3f windowSize;
int position = 0;
ofColor color1;
ofColor color2;
int mouseY;
int mouseX;
float normY;
float normX;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){
    windowSize = ofGetWindowSize();
    normX = float(mouseX)/windowSize.x;
    normY = float(mouseY)/windowSize.y;
    color1.setHsb(255-normY*255, 255, 255);
    color2.setHsb(normY*255,255,255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(color2);
    ofSetColor(color1);
    ofDrawRectangle(windowSize.x/2, windowSize.y/2, 2*(mouseX-windowSize.x/2), 2*(mouseY-windowSize.y/2));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'w'){
        position++;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    mouseY = y;
    mouseX = x;
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