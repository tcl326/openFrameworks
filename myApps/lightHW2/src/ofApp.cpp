#include "ofApp.h"

ofVec3f windowSize;
int position = 0;
ofColor darkGreen(89, 110, 60);
ofColor lightGreen(89, 101, 55);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){
    windowSize = ofGetWindowSize();
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (position % 2){
        ofSetColor(darkGreen);
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofPushMatrix();
        ofTranslate(windowSize.x/2-100,windowSize.y/2);
        ofRotateZ(45);
        ofDrawRectangle(0,0,200,200);
        ofPopMatrix();
        ofSetColor(lightGreen);
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofPushMatrix();
        ofTranslate(windowSize.x/2+100,windowSize.y/2);
        ofRotateZ(45);
        ofDrawRectangle(0,0,200,200);
        ofPopMatrix();
    }
    else {
        ofSetColor(lightGreen);
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofPushMatrix();
        ofTranslate(windowSize.x/2+100,windowSize.y/2);
        ofRotateZ(45);
        ofDrawRectangle(0,0,200,200);
        ofPopMatrix();
        ofSetColor(darkGreen);
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofPushMatrix();
        ofTranslate(windowSize.x/2-100,windowSize.y/2);
        ofRotateZ(45);
        ofDrawRectangle(0,0,200,200);
        ofPopMatrix();
    }

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