#include <iostream>
#include "geom/Rectangle.h"
using namespace std;

int main() {
    Rectangle* rect = new Rectangle(3, 5);
    int area = rect->getArea();
    int perimeter = rect->getPerimeter();
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    return 0;
}