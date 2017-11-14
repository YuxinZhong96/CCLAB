#include "ofApp.h"
int x = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float radius = ofRandom(20,50);
    
    if ( x == 0){
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255),20);
        for(int i = 0; i<50; i++){
            ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);
        }
    }
    
    if ( x == 1){
        ofSetColor(ofRandom(200,255), ofRandom(0,255), ofRandom(200,255),20);
        for(int i = 0; i<50; i++){
            ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);
        }
    }
    
    if ( x == 2){
        ofSetColor(ofRandom(200,255), ofRandom(200,255), ofRandom(0,255),20);
        for(int i = 0; i<50; i++){
            ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);
        }
    }
    
    if ( x == 3){
        ofSetColor(ofRandom(0,255), ofRandom(200,255), ofRandom(200,255),20);
        for(int i = 0; i<50; i++){
            ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);
        }
    }
    
    ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'r'){
        x = 1;
    }
    else if (key == 'y'){
        x = 2;
    }
    else if (key == 'b'){
        x = 3;
    }
   
    if(key == ' '){
        x = 0;
    }

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
