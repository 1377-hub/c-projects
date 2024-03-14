#include <iostream>

class Animal {
public:
    void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.sound(); // Dog barks

    return 0;
}
