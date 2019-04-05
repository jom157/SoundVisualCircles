//
//  CircleClass.hpp
//  jom_sound_visuals
//
//  Created by Chantat Sirimongkolkasem on 4/4/19.
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include "ofMain.h"

class CircleClass{
public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup circleParams;
    ofParameter<int> circleRes;
    ofParameter<float> release;
    ofParameter<float> size;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    
    ofParameter<float> rotateX;
    ofParameter<float> rotateY;
    ofParameter<float> rotateZ;
    
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<int> alpha;
    
    float rotationX = 0.0;
    float rotationY = 0.0;
    float rotationZ = 0.0;
    
    float * fftSmooth;
    int bands;
};

#endif /* CircleClass_hpp */
