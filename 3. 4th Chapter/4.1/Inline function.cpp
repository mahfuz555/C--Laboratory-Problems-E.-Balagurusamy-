#include<iostream>
using namespace std;

inline float multiplication(float x, float y)
{
    return(x*y);
}

inline float division(float a, float b)
{
    return(a/b);
}

int main()
{
    float p,q;
    p = 34.35;
    q = 40.09;

    cout<<"The Multiplication is: " <<multiplication(p,q)<<endl;
    cout<<"The Division is: " <<division(p,q)<<endl;

    return 0;
}
