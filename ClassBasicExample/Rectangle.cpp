//
//  Rectangle.cpp
//  ClassBasicExample
//
//  Created by Dario Caric on 02.03.2024..
//

#include "Rectangle.hpp"
#include <iostream>
#include <math.h>

using namespace std;

// default constructor
Rectangle::Rectangle(){};

// 2nd constructor
Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}

// destructor
Rectangle::~Rectangle(){
    width = 0; // setiranje na pocetne vrijednosti, ovdje nema smisla ali eto za primjer
    height = 0;
    cout << "Destructor is called" << endl;
}


// ovo je kao konstruktor - obicno se koristi konstruktor a ne ovako
void Rectangle::initialize(int a, int b){
    width = a;
    height = b;
}


int Rectangle::area() {
    return  width * height;
}

int Rectangle::extent() {
    return 2 * (height + width);
}

double Rectangle::mainDiagonal() {
    return (sqrt(pow(width, 2) * pow(height, 2)));
}


