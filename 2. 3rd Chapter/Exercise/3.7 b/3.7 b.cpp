#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float lob,hor,term,sum;
    lob = 1;
    term = 1;
    sum = 0;
    for(hor=1;term>=0.0001;hor++)
    {
        term = lob/hor;
        term = pow(term,hor);
        sum = sum + term;
    }
    cout<<"SUM = "<<sum;
    return 0;
}
