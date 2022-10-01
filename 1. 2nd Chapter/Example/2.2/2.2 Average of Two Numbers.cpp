#include<iostream>
using namespace std;

int main()
{
    float num1, num2, sum, average;
    cout << "Enter two numbers: ";
    cin >> num1;
    cin >> num2;

    sum = num1 + num2;
    average = sum/2;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
