#include<iostream>
using namespace std;

void swap(int*,int*);


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int a,b;
    cout <<"Enter the value of a and b: ";
    cin >> a >> b;
    cout << "\nBefore swaping this value a and b is: "<<a<<" "<<b;
    swap(a,b);
    cout << "\nAfter swaping this value a and b is: "<< a <<" "<<b;
    return 0;

}
