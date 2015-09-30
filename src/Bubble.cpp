#include "Bubble.h"

// Constructor - only the image is specified.
Bubble::Bubble(ofImage& img) {
    image = &img;
    position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
}

bool Bubble::isOffScreen(){
    return false;
}

//Mutators
void Bubble::update(){
}

//Call back
void Bubble::draw() {
    image->draw(position.x, position.y);
}

//Event Listener
void Bubble::onClick(){
}
