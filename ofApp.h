//
//  ofApp.h
//  Art HW 2
//
//  Created by uzair pirzada on 10/30/17.
//  Copyright © 2017 Lareb. All rights reserved.
//
#pragma once

#include "ofMain.h"
#include "ofx2DCam.h"
class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofx2DCam cam;
    ofEasyCam easyCam;
    
    bool bUseEasyCam;
};

