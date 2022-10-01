#include<iostream>
using namespace std;
int calc(int);
int calc(int, int);

int main()
{
    int s,a,b;
    cout<<"Enter a integer number: ";
    cin >>s;
    cout<<"The square value of " << s <<" is: "<<calc(s);
    cout<<"\nEnter the value of a and b: ";
    cin >>a>>b;
    cout <<"Addition of a and b is: "<<calc(a,b);
}

int calc(int x)
{
    return(x*x);
}

int calc(int x,int y)
{
    return(x+y);
}
