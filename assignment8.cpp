//Ahmet Yasin Ada
//1306200018
//25.12.2021

#include <iostream>

using namespace std;

class Box
{

public:
    Box()
    {
        cout << "Box is created by default constructer!" << endl;
    }

    Box(double w1, double h1, double l1)
    {
        cout << "Box is created by paramatarized constrcuter " << endl;
        cout << "Volume of the box is: " << w1 * h1 * l1 << endl;
    }

    ~Box()
    {
        cout << "Box is destroyed by destructer" << endl;
    }

    double calculateVolume()
    {
        return width * height * length;
    }

    void setWidth(double otherWidth)
    {

        width = otherWidth;
    }

    double getWidth()
    {
        return width;
    }

    void setLength(double otherLength)
    {

        length = otherLength;
    }

    double getLength()
    {
        return length;
    }

    void setHeight(double otherHeight)
    {

        height = otherHeight;
    }

    double getHeight()
    {
        return height;
    }

private:
    double width;
    double length;
    double height;
};

int main()
{
    int i;
    double w, h, l;

    Box obj1;

    for (i = 1; i <= 10; i++)
    {
        cout << i << ".Box" << endl;
        cout << "Enter width: ";
        cin >> w;

        cout << "Enter height: ";
        cin >> h;

        cout << "Enter length ";
        cin >> l;

        if (i % 2 == 0)
        {
            Box obj2(w, h, l);
        }

        else
        {
            obj1.setWidth(w);
            obj1.setHeight(h);
            obj1.setLength(l);
            cout << "Calculated volume: " << obj1.calculateVolume() << "\n \n";
        }
    }
    return 0;
}