#include<iostream>
using namespace std;

void array(int a[10][10],int x, int y)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>> a[i][j];
        }
    }
}


int main()
{
    int a[10][10],m,n;
    cout<<"Enter the value of m and n: ";
    cin>>m>>n;
    cout<<"\nNow call the matrix function and get the element: ";
    array(a,m,n);

    cout<<endl;

    //Print the matrix value....
    cout<<"You have entered following matrix"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
