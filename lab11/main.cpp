//
// Created by ASUS on 10.01.2022.
//
#include <iostream>

using namespace std;
template <typename T>
class MyClass {     // The class
public:
    T* ptr;


    MyClass() {     // Constructor
        cout << "Hello World!";
        counter++;
    }
    ~MyClass(){
    counter-=1;
    if (!counter) usunptr;
}
};

int main() {
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)
    return 0;
}
