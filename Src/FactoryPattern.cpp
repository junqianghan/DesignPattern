//
// Created by han on 17-9-22.
//
#include "FactoryPattern.h"

void FactoryPatternMain(){
    ShapeFactory sf;
    Shape* s = sf.getShape("CIRCLE");
    s->draw();
}