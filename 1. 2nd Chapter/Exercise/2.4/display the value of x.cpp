#include<iostream>
using namespace std;
int main()
{
    float a,b,c,x;
    cout<<" Enter the value of a,b and c :";
    cin >> a >> b >> c;
    if((b-c)!= 0)
    {
        x = a/b-c;
        cout<<" x = a/b-c = "<<x<<endl;
    }
    else
    {
        cout<<" x = infinity "<<endl;
    }
    return 0;
}
