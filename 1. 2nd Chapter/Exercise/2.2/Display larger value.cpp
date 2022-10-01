#include<iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter two values: ";
    cin >> num1 >> num2;
    if(num1>num2)
        cout <<"The largest number is: " << num1;
    else
        cout << "The largest number is: " << num2;

    return 0;

}
