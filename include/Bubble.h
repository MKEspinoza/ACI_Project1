#ifndef BUBBLE_H
#define BUBBLE_H

#include "ofMain.h"

class Bubble
{
    public:
        // Constructor
        Bubble(ofImage& img, ofSoundPlayer& sd);

        // Observers
        bool isOffScreen();

        // Mutators
        void update();

        // Call back
        void draw();

        // Event Listener
        void onClick(int x, int y);

    private:
        ofImage*        image;
        ofSoundPlayer*  pop_sd;
        ofColor         color;
        int             id;
        ofVec2f         position;
        ofVec2f         velocity;
        float           acceleration;
};

#endif // BUBBLE_H
