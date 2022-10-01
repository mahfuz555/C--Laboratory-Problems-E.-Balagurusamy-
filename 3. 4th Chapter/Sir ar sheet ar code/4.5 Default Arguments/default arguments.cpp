#include<iostream>
using namespace std;

int add(int x=10,int y=30,int z=30)
{
    return(x+y+z);
}

int main()
{
    cout <<"The output is: "<<add()<<endl;
    cout <<"The output is: "<<add(12)<<endl;
    cout <<"The output is: "<<add(5,6)<<endl;
    cout <<"The output is: "<<add(20,80,12)<<endl;


    return 0;
}
