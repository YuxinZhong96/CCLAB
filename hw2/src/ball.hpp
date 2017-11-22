//
//  ball.hpp
//  hw1
//
//  Created by Yuxin on 11/21/17.
//

#ifndef ball_hpp
#define ball_hpp

#include <stdio.h>
#include "ofMain.h"
#endif /* ball_hpp */

class ball{
public:
    void setup(int x, int y);
    void update();
    void draw();
    void erase();
    
    
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
};



