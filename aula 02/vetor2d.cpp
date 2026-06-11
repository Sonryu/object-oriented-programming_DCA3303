#include "vetor2d.h"

void setX(float x_){
    if(x_ > 0){
        x = x_;
    }else{
        x = 0;
    }
}

float getX(void){
    return x;
}