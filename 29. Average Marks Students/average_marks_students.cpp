#include<iostream>
using namespace std;
int main()
{
    float a[5][4], sum;
    for(int i=0; i<5; i++)
    {
        sum = 0;
        cout << "Enter the 3 marks for the student number: "<< i+ 1 << endl;
        for(int j = 0; j< 3; j++)
        {
            cin >> a[i][j];
            sum = sum + a[i][j];
        }
        a[i][3] = sum/3;
    }

    cout << "The students marks and averages are:"<< endl;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j < 4; j++)
            {
                cout<< a[i][j]<<" " ;
            }

        cout << endl;
    }

    cout << endl;
    sum = 0;
    for(int i = 0; i < 5; i++)
        sum = sum + a[i][3];
    cout<<" The Average for all students is:" << (float)sum/5 << endl;
    return 0;
}
