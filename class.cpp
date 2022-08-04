#include<iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        double getRadius();
        void setRadius(double r);
        double getPerimeter();
        double getArea();
};

void Circle::setRadius(double r){
    radius = r;
}
double Circle::getRadius(){
    cout <<"hi"<<endl;
    return radius;
}

double Circle::getPerimeter(){
    const double PI = 3.14;
    return 2*PI*radius;
}

double Circle::getArea(){
    const double PI = 3.14;
    return PI*radius*radius;
}

int main(){

    Circle circle1,circle2;
    double rad1,rad2;

    cout << "Please enter radius 1: " << endl;
    cin >> rad1;

    circle1.setRadius(rad1);

    cout << "Please enter radius 2: " << endl;
    cin >> rad2;

    circle2.setRadius(rad2);

    cout << "Circle 1" << endl;
    cout << "radius:" << circle1.getRadius() << endl;
    cout << "area:" << circle1.getArea() << endl;
    cout << "perimeter:" << circle1.getPerimeter() << endl;

    cout << endl << endl;

    cout << "Circle 2" << endl;
    cout << "radius:" << circle2.getRadius() << endl;
    cout << "area:" << circle2.getArea() << endl;
    cout << "perimeter:" << circle2.getPerimeter() << endl;



    return 0;
}