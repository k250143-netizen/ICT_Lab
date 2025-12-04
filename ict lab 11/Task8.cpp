#include <iostream>
using namespace std;

class Area {
public:
    int area(int side) {
        return side * side;
    }

    int area(int length, int width) {
        return length * width;
    }

    float area(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area obj;

    cout << "Square: " << obj.area(5) << endl;
    cout << "Rectangle: " << obj.area(4, 6) << endl;
    cout << "Circle: " << obj.area(3.5) << endl;
}
