#include<iostream>
#include<cmath>
using namespace std;

int factorial(int power)
{
    if(power==0)
        return 1;
    else
        return power*factorial(power-1);
}

int main()
{
    float x,lob,hor,term,cosx,power=2;
    cout<<"Enter the value of x(in degree): ";
    cin>> x;
    //Convert radian to degree...
    x = x*(3.1416/180);
    cosx=1;
    term=1;
    for(int i=1; term>=0.0001;i++)
    {
        lob=pow(x,power);
        hor=factorial(power);
        term=lob/hor;
        power=power+2;
        if(i%2==1)
            cosx=cosx-term;
        else
            cosx=cosx+term;
    }

    cout<< "Cos(x) = "<<cosx;
    return 0;
}
