#pragma once
template <class T>
struct hexagon
{
    point <T> a1, a2, a3, a4, a5, a6;
    hexagon() = default;
    point <T> center() const {
        T x,y;
        x = (a1.x + a2.x + a3.x + a4.x + a5.x + a6.x) / 6;
        y = (a1.y + a2.y + a3.y + a4.y + a5.y + a6.y) / 6;
        point <T> p(x,y);
        return p;
    }
    void print(std::ostream& out) {
        out << "Coordinates are:\n{\n"<< a1 << a2 << a3 << a4 << a5 << a6 << "}\n";
    }

    T area() const {
        return 0.5 * std::abs((a1.x*a2.y + a2.x*a3.y + a3.x*a4.y + a4.x*a5.y + a5.x*a6.y + a6.x*a1.y) - ( a1.y*a2.x + a2.y*a3.x + a3.y*a4.x + a4.y*a5.x + a5.y*a6.x + a6.y*a1.x ));
    }

    hexagon(std::istream& is) {
        is >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
    }
};
