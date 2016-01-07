#include "ofApp.h"
#include <typeinfo>

int myCircleX;
int myCircleY;
int background = 1;
ofVec3f windowSize;

//--------------------------------------------------------------
void ofApp::setup(){
    windowSize = ofGetWindowSize();
    ofSetFrameRate(60);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    windowSize = ofGetWindowSize();

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (background != 0){
        ofSetColor(89, 101, 55);
        ofDrawRectangle(0, 0, windowSize.x/2 , windowSize.y);
        ofSetColor(0,255,120);
        ofDrawRectangle(windowSize.x/2, 0, windowSize.x/2, windowSize.y);
    }
    ofSetColor(182,39,41);
    ofDrawCircle(windowSize.x/4, windowSize.y/2, 60);
    ofSetColor(221,25,26);
    ofDrawCircle(windowSize.x*3/4, windowSize.y/2, 60);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'w'){
        background = 0;
    }
    if (key == 'q'){
        background = 1;
    }

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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