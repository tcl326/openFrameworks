//
//  ofBall.h
//  BallExample
//
//  Created by Student on 1/7/16.
//
//

#ifndef ofBall_h
#define ofBall_h

#include "ofMain.h"

class ofBall {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    // variables
    float x;      // position
    float y;
    float speedY; // speed and direction
    float speedX;
    int dim;      // size
    float gravity; // 9.8m/s
    float bounciness; // determine the percentage of rebound
    ofColor color;
    bool drag;
    int frameCount = 0;
    int mPressX;
    int mPressY;
    int mReleaseX;
    int mReleaseY;
    
    ofBall(float x, float y, float speedX, float speedY); // constructor - used to initialize an object, if no properties are passed
    //               the program sets them to the default value
    
private: // place private functions or variables declarations here
    
}; // dont't forget the semicolon!!


#endif /* ofBall_h */
