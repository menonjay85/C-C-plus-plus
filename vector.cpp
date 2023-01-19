#include <iostream>
#include <string>
#include<cmath>
using namespace std;

class vector
{
    private:
    double i,j,k;
    public:
    vector()
    {
        i=j=k=0;
    }
    vector(double x,double y,double z)
    {
        i=x;
        j=y;
        k=z;
    }
    vector add(vector v1,vector v2)
    {
        vector v;
        v.i=v1.i+v2.i;
        v.j=v1.j+v2.j;
        v.k=v1.k+v2.k;
        return v;
    }
    double dot(vector v1,vector v2, double theta)
    {
        double v0,a,b;
        a=(v1.i)*(v1.i)+(v1.j)*(v1.j)+(v1.k)*(v1.k);
        b=(v2.i)*(v2.i)+(v2.j)*(v2.j)+(v2.k)*(v2.k);
        v0=sqrt(a)*sqrt(b)*cos(theta);
        cout<<"dot product "<<v0<<endl;
        return v0;

    }
    vector cross(vector v1, vector v2)

    {
        vector c;
        cout<<((v1.j*v2.k)-(v1.k*v2.j))<<"i "<<((v1.i*v2.k)-(v1.k*v2.i))<<"j+ "<<((v1.i*v2.j)-(v2.i*v1.j))<<"k ";
    }
    void display()
    {
        cout<<"i="<<i <<"j="<<j <<"k="<<k;

    }
};
int main()
{
    vector v1(4,5,6), v2(7,10,20);

    vector v3=v1.add(v1,v2);
    v3.display();
    cout<<endl;
    double v4=v1.dot(v1,v2,0.2728);

    vector v5;
    v5.cross(v1,v2);
    return 0;
}
