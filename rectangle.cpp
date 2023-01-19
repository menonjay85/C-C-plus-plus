#include <iostream>
using namespace std;

class point
{
    private:
    double x;
    double y;
    public:
    point()
    {
        x=y=0;
    }
    point(double x, double y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<"("<<this->x<<","<<this->y<<")"<<endl;
    }
    void set_x(double x)
    {
        this->x=x;
    }
    void set_y(double y)
    {
        this->y=y;
    }
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
};

class rectangle
{
    private:
    point tl;
    double len,wid;

    public:
    rectangle()
    {
        tl.set_x(0);
        tl.set_y(0);
        len=0;
        wid=0;
    }
    rectangle(point p,double len,double wid)
    {
        tl.set_x(p.get_x());
        tl.set_y(p.get_y());
        this->len=len;
        this->wid=wid;
    }
    rectangle(double tlx, double tly, double len, double wid)
    {
        tl.set_x(tlx);
        tl.set_y(tly);
        this->len=len;
        this->wid=wid;
    }
    point calc_centroid()
    {
        point p;
        p.set_x(tl.get_x()+len/2);
        p.set_y(tl.get_y()+wid/2);
        return p;
    }
    point calc_diagonally_opposite()
    {
        point p;
        p.set_x(tl.get_x()+len);
        p.set_y(tl.get_y()+wid);
        return p;
    }
};





int main()
{
  point p(40,30);
  rectangle r(p,30,40);
  point centroid=r.calc_centroid();
  centroid.display();
  point br=r.calc_diagonally_opposite();
  br.display();
}
