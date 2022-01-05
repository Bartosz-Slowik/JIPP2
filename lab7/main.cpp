#include <iostream>

using namespace std;

class Figura {
protected:
    string name;
    string color;

public:
    Figura(const string &name, const string &color) : name(name), color(color) {}

    virtual double getArea() = 0; //Przypisujemy 0, aby nie było ciała metody
};

class Rectangle : public Figura {
protected:
    int a;
    int h;
public:
    Rectangle(const string &name, const string &color, int a, int h) : Figura(name, color), a(a), h(h) {}

    void printData(){
        cout<<color<<" "<<name<<" area = "<<getArea();

    }
    double getArea(){
        return a*h;
    }
};
class Circle: public Figura{
protected:
    int r;
public:
    Circle(const string &name, const string &color, int r) : Figura(name, color), r(r) {}
    double getArea(){
        return 3,14*r;
    }
};

int main(){
        Figura *circle = new Circle("circle","yellow",5);
        Figura *rectangle = new Rectangle("rectangle","red",5, 18);

        cout << "Circle area: " << circle->getArea() << endl;
        cout << "Rectangle area: " << rectangle->getArea() << endl;

    return 0;
}