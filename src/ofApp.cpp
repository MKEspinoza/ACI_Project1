#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetRectMode(OF_RECTMODE_CENTER);
    bubbleImage.loadImage("bubble_img.png");
    popSound.loadSound("pop_sound.mp3");
    popSound.setMultiPlay(true);
    ofEnableAlphaBlending();
    ofBackground(ofColor::black);

    int number_ofBubbles = 5;
    for (int i = 0; i < number_ofBubbles; i++){
        Bubble b(bubbleImage,popSound);
        container.push_back(b);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < container.size(); ++i){
        container[i].update();
        if (container[i].isOffScreen()){
            container.erase (container.begin()+i);
        }

    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < container.size(); ++i){
        container[i].draw();
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
    for (int i = 0; i < container.size(); i++){
        if (container[i].onClick(x,y)){
            container.erase (container.begin()+i);
        }
    }
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
