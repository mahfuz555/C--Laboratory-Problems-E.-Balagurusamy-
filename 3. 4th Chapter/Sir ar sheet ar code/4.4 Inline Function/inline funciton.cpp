#include<iostream>
using namespace std;

inline int max(int x, int y)
{
    return((x>y)?x:y);
}

int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin >>a>>b;
    cout <<"The largest number is: "<<max(a,b);
    return 0;
}
