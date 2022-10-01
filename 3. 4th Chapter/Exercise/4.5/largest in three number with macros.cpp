#include<iostream>
using namespace std;

//inline function works as macros....
inline int largest(int a,int b,int c)
{
    int m = (a>b)?((a>c)?a:c):((b>c)?b:c);
    return m;
}

int main()
{
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>> x>>y>>z;
    //Print largest number...
    cout<< "\nThe largest number is: "<<largest(x,y,z);
    return 0;
}
