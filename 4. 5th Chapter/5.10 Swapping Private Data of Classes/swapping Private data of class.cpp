#include<iostream>
using namespace std;

class class_2;

class class_1
{
    int value1;
public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << "Value1 = " <<value1 <<endl;
    }
    friend void exchange(class_1 &a, class_2 &b);
};

class class_2
{
    int value2;
public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << "Value2 = " <<value2 <<endl;
    }
    friend void exchange(class_1 &a, class_2 &b);
};

void exchange(class_1 &a, class_2 &b)
{
    int temp;
    temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}

int main()
{
    class_1 x;
    class_2 y;
    x.indata(100);
    y.indata(200);

    cout <<"Values before exchange: "<<endl;
    x.display();
    y.display();

    cout<<endl;

    //call the exchange for swaping function;
    exchange(x,y);

    cout <<"Values after exchange: "<<endl;
    x.display();
    y.display();

    return 0;

}
