#include "ofApp.h"
int x = 0;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    int num = 50;
    for (int i = 0; i < num; i++) {
        ball myball;
        myball.setup(ofRandom(ofGetMouseX()), ofGetMouseY());
        balls.push_back(myball);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < balls.size(); i++ ){
        float distance = ofDist(balls[i].position.x, balls[i].position.y, ofGetMouseX(), ofGetMouseY());
        if (distance < 5){
            balls[i].erase();
        }
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < balls.size();i++){
        balls[i].draw();
        balls[i].update();
    }
    
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
