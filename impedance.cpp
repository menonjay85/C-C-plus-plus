// Example program
#include <iostream>
using namespace std;

class impedance
{
  private:
  double resistance,reactance;
  public:
  impedance()
  {
      resistance=0;
      reactance=0;
 }
 impedance(double resistance, double reactance)
 {
     this->resistance=resistance;
     this->reactance=reactance;
 }
 void display()
 {
    if (this->reactance>=0)
    cout<<this->resistance<<"+j"<<this->reactance<<endl;
    else
    cout<<this->resistance<<"-j"<<-(this->reactance)<<endl;
}

    impedance series_equivalent(impedance obj)
    {
        impedance result;
        result.resistance=this->resistance+obj.resistance;
        result.reactance=this->reactance+obj.reactance;
        return result;
    }

    impedance conjugate()
    {
        impedance result(this->resistance,-this->reactance);
        return result;
    }
    impedance product(impedance obj)
    {
        impedance result;
        result.resistance=this->resistance*obj.resistance-this->reactance*obj.reactance;
        result.reactance=this->reactance*obj.resistance+this->resistance*obj.reactance;
        return result;
    }
    impedance equivalent_parallel(impedance obj)
    {
        impedance num,den,denc,result;
        num=this->product(obj);
        num.display();
        den=this->series_equivalent(obj);
        den.display();
        denc=den.conjugate();
        denc.display();
        num=num.product(denc);
        den=den.product(denc);
        num.display();
        den.display();
        result.resistance=num.resistance/den.resistance;
        result.reactance=num.reactance/den.resistance;
        result.display();
        return result;

    }
};
int main()
{
  impedance o1(10,20);
  o1.display();
  impedance o2(30,-40);
  o2.display();
  impedance parallel;
    parallel=o1.equivalent_parallel(o2);
    }
