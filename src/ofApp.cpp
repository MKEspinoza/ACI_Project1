#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetRectMode(OF_RECTMODE_CENTER);
    bubbleImage.loadImage("bubble_img.png");
    popSound.loadSound("pop_sound.mp3");
    popSound.setMultiPlay(true);


    Bubble b(bubbleImage,popSound);
    container.push_back(b);
}

//--------------------------------------------------------------
void ofApp::update(){
    container[0].update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::black);
    container[0].draw();
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
    container[0].onClick(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
