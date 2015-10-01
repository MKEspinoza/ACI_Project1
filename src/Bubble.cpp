#include "Bubble.h"

// Constructor - only the image is specified.
Bubble::Bubble(ofImage& img) {
    image = &img;
    position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);

    velocity = ofVec2f(ofRandom(-5,5),ofRandom(-5,5));


}

bool Bubble::isOffScreen(){
    return false;
}

//Mutators
void Bubble::update(){
    if (velocity.x >0){
        velocity.x -= .75;
    }
    if (velocity.y>0){
        velocity.y -= .75;
    }
    position.x += velocity.x;
    position.y += velocity.y;
}


//Call back
void Bubble::draw() {
    image->draw(position.x, position.y);
}

//Event Listener
void Bubble::onClick(){
}
