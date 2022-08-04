#include<iostream>
#include<cassert>

using namespace std;

class Rectangle{
    private:
        double length;
        double height;
    public:
        Rectangle(double length, double height);
        Rectangle(const Rectangle& rect);
        ~Rectangle();
        void print()const;
        double getArea()const;
        double getPerimeter()const;
};

Rectangle::Rectangle(double l, double h){
    if(l<=0 || h<=0){
        cout <<"No way" << endl;
        assert(false);
    }
    length = l;
    height = h;
}
Rectangle::Rectangle(const Rectangle& rect){
    length = rect.length;
    height = rect.height;
}
Rectangle::~Rectangle(){
    cout<<"Destructor is called";
}
void Rectangle::print()const{
    cout << "Height" << height << endl;
    cout << "Length" << length << endl;
}
        
double Rectangle::getArea()const{
    return length*height;
}
double Rectangle::getPerimeter()const{
    return 2*(length+height);
}

int main(){

Rectangle rec1(2.5,4.0);
Rectangle rec2(5.2,3.0);
Rectangle rec3(rec2);

cout << "Rec1"<<endl;
rec1.print();
cout << "perimeter: "<< rec1.getPerimeter() << endl;
cout << "area: " << rec1.getArea() << endl;

cout << "Rec2"<<endl;
rec2.print();
cout << "perimeter: "<< rec2.getPerimeter() << endl;
cout << "area: " << rec2.getArea() << endl;

cout << "Rec3"<<endl;
rec3.print();
cout << "perimeter: "<< rec3.getPerimeter() << endl;
cout << "area: " << rec3.getArea() << endl;

return 0;
}