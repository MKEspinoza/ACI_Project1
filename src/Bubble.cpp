#include "Bubble.h"

// Constructor - only the image is specified.
Bubble::Bubble(ofImage& img, ofSoundPlayer& sd) {
    image = &img;
    pop_sd = &sd;
    position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    velocity = ofVec2f(ofRandom(-8,8),ofRandom(-8,8));


}

bool Bubble::isOffScreen(){
    int radius = position.x/2;
    int leftmost = position.x - radius;
    int rightmost = position.x + radius;
    int uppermost = position.y - radius;
    int bottommost = position.y + radius;

    return (uppermost > ofGetHeight() || bottommost < 0 || rightmost < 0 || leftmost > ofGetWidth() );

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
    ofSetColor(ofColor::tomato);
    image->draw(position.x, position.y);
}

//Event Listener
bool Bubble::onClick(int x, int y){
    float radius = image->getHeight()/2;
    float current_dist = ofDist(x,y,position.x, position.y);
    if ( current_dist <= radius ){
        pop_sd->play();
        return true;
    }
    return false;
}
