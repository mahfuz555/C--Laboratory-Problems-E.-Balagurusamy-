#include<iostream>
using namespace std;

class set
{
    int m,n;
public:
    void input(void);
    int largest(void);
    void display(void);
};

void set :: input(void)
{
    cout<< "Input values of m and n: ";
    cin >>m>>n;
}

int set :: largest(void)
{
    if(m>=n)
        return m;
    else
        return n;
}

void set::display(void)
{
    cout<<"Largest value = " << largest() << endl;
}

int main()
{
        set A;
        A.input();
        A.display();
        return 0;
}
