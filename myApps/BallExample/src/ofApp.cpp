#include "ofApp.h"
int erase;
bool fade = false;

//--------------------------------------------------------------
void ofApp::setup(){
    numBalls = 0;
    ofSetFrameRate(60);
    ofBackground(255, 255, 255);
    ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int a = 0; a < numBalls; a++)
    {
        myBalls[a].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int a = 0; a < numBalls; a++)
    {
        myBalls[a].draw();
        if (myBalls[a].opacity == 0)
        {
            erase = a;
            fade = true;
        }
    }
    if (fade){
        myBalls.erase(myBalls.begin()+erase);
        numBalls = myBalls.size();
        fade = false;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        myBalls.push_back( ofBall(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10)) );
        numBalls = myBalls.size();
    }
    if (key == 'c'){
        myBalls.clear();
        numBalls = 0;
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
    myBalls.back().x = x;
    myBalls.back().y = y;
    myBalls.back().frameCount ++;
    cout << myBalls.back().frameCount;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    myBalls.push_back( ofBall(x, y, 0, 0) );
    numBalls = myBalls.size();
    myBalls.back().frameCount ++;
    myBalls.back().drag = true;
    myBalls.back().mPressX = x;
    myBalls.back().mPressY = y;
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    myBalls.back().drag = false;
    myBalls.back().mReleaseX = x;
    myBalls.back().mReleaseY = y;
    myBalls.back().speedX = (myBalls.back().mReleaseX - myBalls.back().mPressX)/myBalls.back().frameCount;
    myBalls.back().speedY = (myBalls.back().mReleaseY - myBalls.back().mPressY)/myBalls.back().frameCount;

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