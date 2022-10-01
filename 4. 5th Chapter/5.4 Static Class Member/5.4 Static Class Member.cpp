#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "Count: ";
        cout <<count;
    }

};

int item::count;

int main()
{
    item a,b,c;         //count is initialize to zero;
    a.getcount();
    cout <<endl;
    b.getcount();
    cout <<endl;
    c.getcount();
    cout <<endl;


    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading data"<<endl;
    a.getcount();       //increment starting....(1)
    cout <<endl;
    b.getcount();         //(2)
    cout <<endl;
    c.getcount();         //(3)
    cout <<endl;

    return 0;

}
