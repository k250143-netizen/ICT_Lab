#include <iostream>
using namespace std;

class Animal {
public:
    string name;

    Animal(string n) {
        name = n;
    }

    void makeSound() {
        cout << name << " makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " barks" << endl;
    }
};

int main() {
    Animal a1("Generic Animal");
    a1.makeSound();

    cout << endl;


    Dog d1("Tommi");
    d1.makeSound();  
    d1.bark();

    return 0;
}
