//
// Created by han on 17-9-22.
//

#ifndef DESIGNPATTERN_FACTORYPATTERN_H
#define DESIGNPATTERN_FACTORYPATTERN_H
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Shape{
 public:
  virtual void draw()=0;
};

class Rectangle : public Shape{
 public:
  void draw() override{
      cout<<"Inside Rectangle::draw() method."<<endl;
  }
};

class Square : public Shape{
 public:
  void draw() override {
      cout<<"Inside Square::draw() method."<<endl;
  }
};

class Circle : public Shape{
 public:
  void draw() override {
      cout<<"Inside Circle::draw() method."<<endl;
  }
};

class ShapeFactory{
 public:
  Shape* getShape(string shapeType){
      if(shapeType==""){
          return nullptr;
      }
      if(shapeType == "CIRCLE"){
          return new Circle();
      }else if (shapeType == "RECTANGLE"){
          return new Rectangle();
      }else if (shapeType == "SQUARE"){
          return new Square();
      }
      return nullptr;
  }
};
void FactoryPatternMain();

#endif //DESIGNPATTERN_FACTORYPATTERN_H
