#include "Bubble.h"

// Constructor - only the image is specified.
Bubble::Bubble(ofImage& img, ofSoundPlayer& sd) {
    image = &img;
    pop_sd = &sd;
    position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    velocity = ofVec2f(ofRandom(-5,5),ofRandom(-5,5));


}

bool Bubble::isOffScreen(){
    return false;
}

//Mutators
void Bubble::update(){
    velocity.x *= .99;
    velocity.y *= .99;
    position.x += velocity.x;
    position.y += velocity.y;

}


//Call back
void Bubble::draw() {
    image->draw(position.x, position.y);
}

//Event Listener
void Bubble::onClick(int x, int y){
    float radius = image->getHeight()/2;
    float current_dist = ofDist(x,y,position.x, position.y);
    if ( current_dist <= radius ){
        pop_sd->play();
    }
}
