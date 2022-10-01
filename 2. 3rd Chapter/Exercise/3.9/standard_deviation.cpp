#include<iostream>
#include<cmath>
#define Maxsize 100
using namespace std;


int main()
{
    int i,n;
    float value[Maxsize],sum,mean,deviation,sumsqr,variance,std_deviation;
    sum=sumsqr=n=0;

    //Take input valus...
    cout<<"Input values (input -1 to end): ";
    for(i=1; i<Maxsize; i++)
    {
        cin>> value[i];
        if(value[i]==-1)
            break;
        sum = sum+value[i];
        n = n+1; //for total element count...
    }

    cout<<"Number of items: "<<n<<endl;

    mean = sum/n;
    cout<<"Mean is: "<<mean<<endl;

    for(int i =1; i<=n; i++)
    {
        deviation = value[i]-mean;
        sumsqr = sumsqr + (deviation*deviation);
    }

    variance = sumsqr/n;
    std_deviation = sqrt(variance);

    //Print the outputs....
    cout<<"Variance: "<<variance<<endl;
    cout<<"Standard deviation: "<<std_deviation<<endl;
    return 0;
}
