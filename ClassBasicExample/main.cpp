//
//  main.cpp
//  ClassBasicExample
//
//  Created by Dario Caric on 02.03.2024..
//

#include <iostream>
#include "Rectangle.hpp"

using namespace std;

int main() {
    
    // NACIN 1 bez konstruktora
    Rectangle rect1; // rect is object of Rectangle
    
    rect1.initialize(10, 20);
    cout << rect1.area() << endl;
    cout << rect1.extent() << endl;
    cout << rect1.mainDiagonal() << endl;

    
    // NACIN 2 sa basic konstruktorom
    // ovo dole je basik konstruktor koji ne prima nista i
    // zato moramo pozvati metodu initialize kako bi setirali width i height privatne variable
    Rectangle rect2 = Rectangle();
    rect2.initialize(3, 10);
    cout << rect2.area() << endl;
    cout << rect2.extent() << endl;
    cout << rect2.mainDiagonal() << endl;
    
    
    // NACIN 3 sa drukim konstruktorom
    // sad ne treba zvati metodu initialize jer smo koristili
    // konstruktor koji prima dvije vrijednosti i mi smo tako
    // proslijedili 8 i 22
    Rectangle rect3 = Rectangle(8, 22);
    cout << rect3.area() << endl;
    cout << rect3.extent() << endl;
    cout << rect3.mainDiagonal() << endl;
    
    
    // NACIN 4 - sa heapom
    Rectangle *rect4 = new Rectangle(4,6);
    cout << rect4->area() << endl;
    cout << (*rect4).extent() << endl; // nacin bez -> ali onda treba (*rect4) pa onda .IMEFUNKCIJE
    cout << rect4->mainDiagonal() << endl;
    // sad buduci smo radili sa heapom (cim je NEW rijec to je heap)
    // sad moramo deletati nakon upotrebe taj objek jer inace bi ostao u memoriji stalno
    // ovo prije sa rect1, rect2 i rect3 je bolje jer se samo brise iz memorije kad vise ne treba
    
    // ako ovo zakomentiras onda ce biti 3x ispisamo "Destructor is called" sto znaci 3x za rect1-3 jer je to automatski
    // a rect4 nema tu automatiku
    delete rect4;
    

    return 0;
}
