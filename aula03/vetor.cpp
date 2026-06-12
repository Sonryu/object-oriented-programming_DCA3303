#include "vetor.h"
#incldue <iostream>

Vetor::Vetor(){
    x = y = 0;

    std::cout << "construtor padrão" << std::endl;
}

Vetor::~Vetor(){
    
    std::cout << "destrutor da classe" << std::endl;

}

void Vetor::setX(float mx){
    x = mx;
};

void Vetor::setY(float my){
    y = my;
};

float Vetor::getX(){
    return x;
}

float Vetor::getY(){
    return y;
}