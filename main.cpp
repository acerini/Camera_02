//
//  main.cpp
//  Art HW 2
//
//  Created by uzair pirzada on 10/30/17.
//  Copyright © 2017 Lareb. All rights reserved.
//

#include "ofApp.h"

//========================================================================
int main( ){
    
    ofSetupOpenGL(1024,768, OF_WINDOW);            // <-------- setup the GL context
    
    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp( new ofApp());
    
}
