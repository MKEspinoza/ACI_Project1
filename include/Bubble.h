#ifndef BUBBLE_H
#define BUBBLE_H

#include "ofMain.h"

class Bubble
{
    public:
        // Constructor
        Bubble(ofImage& img);

        // Observers
        bool isOffScreen();

        // Mutators
        void update();

        // Call back
        void draw();

        // Event Listener
        void onClick();

    private:
        ofImage*    image;
        ofColor     color;
        int         id;
        ofVec2f     position;
        ofVec2f     velocity;
        float       acceleration;
};

#endif // BUBBLE_H
