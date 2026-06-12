#ifndef VETOR_H
#define VETOR_H

class Vetor{
    float x, y;

public: 

    Vetor();

    Vetor(float mx, float my);

    ~Vetor();

    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);
};

#endif