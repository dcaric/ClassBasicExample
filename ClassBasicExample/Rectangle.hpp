//
//  Rectangle.hpp
//  ClassBasicExample
//
//  Created by Dario Caric on 02.03.2024..
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class Rectangle {

private:
    int width = 0;
    int height = 0;
    
    
    
public:
    
    // konstruktor i destruktopr su posebne metode (funkcije) koje sluze
    // za inicijalizaciju (kreiranje) objekata te klase ili kod brisanja (deletanja)
    // tih objekata
    // default constructor which does not accept arguments
    Rectangle();
    // 2nd constructor which accepts 2 arguments
    Rectangle(int, int);
    // destructor used when objet is deleted
    ~Rectangle();
    
    // OTHER METHODS (FUNCTIONS)
    void initialize(int, int);
    int area ();
    int extent();
    double mainDiagonal();
    
    
};

#endif /* Rectangle_hpp */
