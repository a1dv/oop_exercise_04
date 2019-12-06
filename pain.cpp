#include <iostream>
#include "point.h"
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"
#include "templates.h"


int main()
{
    std::cout << "1 - pentagon \n 2 - hexagon \n 3 - octagon \n 4 - exit \n";
    int i;
    point <double> a1, a2, a3, a4, a5, a6, a7, a8;
    while(true) {
        std::cin >> i;
        if (i == 1) {
            pentagon <double> p(std::cin);
	        std::cout << "Enter a tuple for pentagon:\n";
	        std::cin >> a1 >> a2 >> a3 >> a4 >> a5;
            p.print(std::cout);
	        std::tuple <point<double>, point<double>, point<double>, point<double>, point <double>> p1{a1, a2, a3, a4, a5};
            print(p1, std::cout);
            std::cout << "Area:\n" << area(p1) << "\nCenter:\n" << center(p1);
        }
        if (i == 2) {
            hexagon <double> h(std::cin);
            std::cout << "Enter a tuple hexagon:\n";
            std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
            h.print(std::cout);
            std::tuple <point<double>, point<double>, point<double>, point<double>, point <double>, point <double>> h1{a1, a2, a3, a4, a5, a6};
            print(h1, std::cout);
            std::cout << "Area:\n" << area(h1) << "\nCenter:\n" << center(h1);
        }
        if (i == 3) {
            octagon <double> o(std::cin);
            std::cout << "Enter a tuple octagon:\n";
            std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8;
            o.print(std::cout);
            std::tuple <point<double>, point<double>, point<double>, point<double>, point <double>, point <double>, point <double>, point <double>> o1{a1, a2, a3, a4, a5, a6, a7, a8};
            print(o1, std::cout);
            std::cout << "Area:\n" << area(o1) << "\nCenter:\n" << center(o1);
        }
        if (i == 4) {
            break;
        }
        std::cout << "1 - pentagon \n 2 - hexagon \n 3 - octagon \n 4 - exit";
    }
}
