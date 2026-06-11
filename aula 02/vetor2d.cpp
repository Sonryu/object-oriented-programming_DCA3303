#include "vetor2d.h"

void Vetor2d::setX(float x_){
    if(x_ > 0){
        x = x_;
    }else{
        x = 0;
    }
}

float Vetor2d::getX(void){
    return x;
}