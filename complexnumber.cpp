// Example program
#include <iostream>
#include <string>
using namespace std;
class complex_number
{
    private:
    double real_number, imag_number;
    public:
    complex_number(complex_number &cnref)
    {
        cout<<"copy constructor"<<endl;
        real_number=cnref.real_number;
        imag_number=cnref.imag_number;
    }
    complex_number(double real_number, double imag_number)
    {
        //parametrized
        cout<<"paramerized 1 constructor"<<endl;
        this->real_number=real_number;
        this->imag_number=imag_number;
    }
  /*  complex_number(int real_number, double imag_number)
    {
        //parametrized
        cout<<"paramerized 2 constructor"<<endl;
        this->real_number=real_number;
        this->imag_number=imag_number;
    }
    complex_number(double real_number, int imag_number)
    {
        //parametrized
        cout<<"paramerized 3 constructor"<<endl;
        this->real_number=real_number;
        this->imag_number=imag_number;
    }*/
    double get_real_number()
    {
        return real_number;
    }
    double get_imag_number()
    {
        return imag_number;
    }
    void set_real_number(double real_number)
    {
        this->real_number=real_number;
    }
    void set_imag_number(double imag_number)
    {
        this->imag_number=imag_number;
    }
    complex_number()
    {

        cout<<"Default Constructor"<<endl;
        real_number=imag_number=0.0;
    }

};
int main()
{
    complex_number o1;
    cout<<o1.get_real_number()<<endl;
    cout<<o1.get_imag_number()<<endl;
    o1.set_real_number(5.0);
    o1.set_imag_number(10.0);
    cout<<o1.get_real_number()<<endl;
    cout<<o1.get_imag_number()<<endl;
/*
    complex_number o2(10.25,30.25);
    complex_number o3(10,30.25);
    complex_number o4(10.25,30);
    complex_number o5(10,30);
    complex_number o6(o5);
    complex_number o7=o5;
    complex_number &cnref=o2;
    cout<<o2.get_real_number()<<endl;
    cout<<cnref.get_real_number()<<endl;
    complex_number *cnptr1=&o6;
    complex_number *cnptr2=&o7;
    cout<<cnptr1<<endl;
    cout<<cnptr2<<endl;
    cout<<&o5<<endl; */

}
