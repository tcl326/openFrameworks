#include "ofApp.h"
#include <vector>
#include <algorithm>

vector<int> nList = {1,2,3,4,5,6,7};
vector<int> dList = {1,2,3,4,5,6,7,8,9};
vector<float> xList;
vector<float> yList;
float t = 0;
float i = t;
float n = 1;
float d = 9;
float k = n/d;
float a = 100;
int maxSize = 1000;
int c = 0;
vector<float> kList;
int turns;
float increment = 0.02;
vector<int> turnsList;

ofColor color;


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);// draw grey background
    ofSetColor(255);// set color drawing color to white
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2); // move initital drawing postion to the center of the screen
    
    
    
    for (int n = 1.0; n < 8; n++){
        for (int d = 1.0; d < 10; d++){
            if ( n == d){
                continue;
            }
            if(std::find(kList.begin(), kList.end(), float(n)/float(d)) != kList.end()) {
                continue;
            }
            if (n % d == 0){
                if (n/d % 2 == 0){
                    turns = 2;
                }
                else{
                    turns = 1;
                }
            }
            else{
                if ( int(float(d)/float(n)) % 2 == 0 || n % 2 == 0){
                    turns = 2*d;
                }
                else{
                    turns = d;
                }
            }
            turnsList.push_back(turns);
            kList.push_back(float(n)/float(d));
        }
    }
    /*
    std::sort (kList.begin(), kList.end());
    
    std::vector<float>::iterator it;
    it = std::unique (kList.begin(), kList.end());   // 10 20 30 20 10 ?  ?  ?  ?
    //                ^
    
    kList.resize( std::distance(kList.begin(),it) ); // 10 20 30 20 10
    
    std::cout << "myvector contains:";
    for (it=kList.begin(); it!=kList.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
     */
    k = kList[0];
    
    
    


    

    
}

//--------------------------------------------------------------
void ofApp::update(){

    float x =cos(k*i)*cos(i)*a;
    float y =cos(k*i)*sin(i)*a;
    
    xList.push_back(x);
    yList.push_back(y);
    
    i+=increment*pi;
    
    if (xList.size() > maxSize){
        xList.erase(xList.begin());
        yList.erase(yList.begin());
    }
    //std:: cout<< xList.rbegin()[0] << "; " << yList.rbegin()[0] << std::endl;
    
    std::cout<< turnsList[c] << "; "<< kList[c] << std::endl;
    
    if (i > turnsList[c] * pi){
        c++;
        k = kList[c];
        i = 0;
        if (turnsList[c] < 3){
            increment = 0.01;
        }
        else{
            increment = 0.02;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    float hue = 0;
    float hueIncrease = 0;
    for (int i = 0; i < xList.size(); i++) {
        //std::cout << xList.size()<< std::endl;
        hueIncrease = 255.0/xList.size();
        hue += hueIncrease;
        color.setHsb(179.35, 62.59, hue);
        ofSetColor(color);
        ofDrawCircle(xList[i]+ofGetWidth()/2, yList[i]+ofGetWidth()/2, 4);
    }

    //line.close(); // close the shape

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
