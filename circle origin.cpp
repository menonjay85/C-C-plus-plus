// Example program
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class point
{
    private:
    double x,y;
    public:
    point()
    {
        x=0;
        y=0;
    }
    point(double a, double b)
    {
        x=a;
        y=b;
    }
    //functions
    void set_x(double a)
    {
        x=a;
    }
    void set_y(double b)
    {
        y=b;
    }
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    double calc_distance(point a, point b )
    {
        return hypot(a.x-b.x,a.y-b.y);
    }
    double calc_distance(point a)
    {
        return hypot(a.x-this->x,a.y-this->y);
    }
};
class circle
{
    private:
    point origin;
    double radius;
    public:
    circle()
    {
        origin.set_x(0);
        origin.set_y(0);
        radius=0;
    }
    circle (double x, double y, double rad )
    {
        origin.set_x(x);
        origin.set_y(y);
        radius=rad;
    }
    void display_circle()
    {
        cout<<"origin: ";
        origin.display();
        cout<<"radius: "<<radius<<endl;
    }
    };
int main()
{


    circle c1(4,5,70);
    c1.display_circle();
}
