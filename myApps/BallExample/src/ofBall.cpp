//
//  ofBall.cpp
//  BallExample
//
//  Created by Student on 1/7/16.
//
//

#include <stdio.h>
#include "ofBall.h"

ofBall::ofBall(float _x, float _y, float _speedX, float _speedY)
{
    x = _x;//ofRandom(0, ofGetWidth());      // give some random positioning
    y = _y;//ofRandom(0, ofGetHeight());
    
    speedX = _speedX;//ofRandom(-10, 10);           // and random speed and direction
    speedY = _speedY;//ofRandom(-10, 10);
    bounciness = ofRandom (0.2,1);
    color.setHsb(ofRandom(0,255), 255, 255);
    
    dim = 50;
}

void ofBall::update(){
    if (!drag){

    gravity = 9.8;
    if(x < 0 ){
        x = 0;
        speedX *= -1*bounciness;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1*bounciness;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1*bounciness;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1*bounciness;
    }
    speedY += gravity/60;
    
    x+=speedX;
    y+=speedY;
    }
}

void ofBall::draw(){
    // values for R, G, B
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}