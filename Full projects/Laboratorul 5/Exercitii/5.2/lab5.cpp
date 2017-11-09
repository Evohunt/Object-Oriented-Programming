# include <iostream>
# include "lab5.h"

using namespace std;

/// Functions of Form
string Form::getColor() {

    return this -> color;

}

void Form::setColor(string color) {

    this -> color = color;

}

string Form::getName() {

    return this -> name;

}

void Form::setName(string name) {

    this -> name = name;

}



/// Functions of Rectangle
void Rectangle::setWidth(int width) {

    this -> width = width;

}

int Rectangle::getWidth() {

    return this -> width;

}

