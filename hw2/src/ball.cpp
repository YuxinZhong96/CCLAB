//
//  ball.cpp
//  hw1
//
//  Created by Yuxin on 11/21/17.
//

#include "ball.hpp"

void ball::setup(int x, int y){
    position.x = x;
    position.y = y;
    velocity.set(ofRandom(-1.5,1.5),ofRandom(-2.2,2.2));
    acceleration.set(0,ofRandom(0,0.02));
}

void ball::update(){
    velocity += acceleration;
    position += velocity;
    
    if(position.x < 0 || position.x > ofGetWidth()){
        velocity.x = -velocity.x;
    }
    
    if(position.y < 0 || position.y > ofGetHeight()){
        velocity.y = -velocity.y;
    }

}

void ball::draw(){
    ofFill();
    ofSetColor(ofRandom(185,225),ofRandom(20,80),ofRandom(150,210));
    ofDrawCircle(position.x, position.y,15);
}



