#include<iostream>
using namespace std;

int add(int x=10,int y=20,int z=30)
{
    return(x+y+z);
}

int main()
{
    cout <<add() <<endl;        //output = 60;
    cout << add(5)<<endl;     //output = 55;
    cout<< add(7,8)<<endl;       //output = 45;
    cout <<add(7,8,10)<<endl;       //output = 25;

    return 0;
}
