#include<iostream>
using namespace std;
class temp
{
private:
    float fahrenheit, celsius;
public:
    float Convert_celsius(float fahrenheit);
};

float temp::Convert_celsius(float fahrenheit)
{
    celsius =((5*fahrenheit)-160)/9;
    cout<<"Temperature in Celsius scale = "<< celsius <<endl;
}
int main()
{
    temp temperature;
    float n;
    cout << "Enter the temperature in Fahrenheit scale: ";
    cin >> n;
    temperature.Convert_celsius(n);

    return 0;
}
