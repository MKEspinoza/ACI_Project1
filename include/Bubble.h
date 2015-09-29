#ifndef BUBBLE_H
#define BUBBLE_H

#include "ofMain.h"


class Bubble
{
    public:
        // Constructor
        Bubble();

        //Observers
        bool isOffScreen();

        //Mutators
        void update();

        //Call back
        void draw();

        //Event Listener
        void onClick();

    private:
        ofColor     color;
        int         id;
        ofVec2f     position;
        ofVec2f     velocity;

};

#endif // BUBBLE_H
