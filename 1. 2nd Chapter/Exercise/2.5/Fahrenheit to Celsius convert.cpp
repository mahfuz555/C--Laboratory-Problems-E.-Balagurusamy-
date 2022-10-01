#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout << "Enter the temperature in Fahrenheit scale: ";
    cin >> fahrenheit;
    celsius =((5*fahrenheit)-160)/9;
    cout<<" Temperature in Celsius scale = "<< celsius <<endl;
    return 0;
}
