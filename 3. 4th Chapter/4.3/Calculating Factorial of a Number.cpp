#include<iostream>
using namespace std;

int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return(a*factorial(a-1));
}

int main()
{
    int n;
    cout <<"Enter a positive integer: ";
    cin >> n;
    cout<<"The factorial number is: "<<factorial(n);
    return 0;
}
