#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
public:
    void setcode(void)
    {
         code = ++count;
    }

    void showcode(void)
    {
        cout <<"Object number: "<<code<<endl;
    }

    static void showcount(void)
    {
        cout << "Count: " <<count<<endl;
    }
};

int test::count;


int main()
{
    test t1, t2;        //Count is initialize to zero(0)

    t1.setcode();       //count increment = 1
    t2.setcode();       //count++ 1+1 = 2

    test::showcount();      //count = 2
    test t3;

    t3.setcode();       //count++  2+1 = 3

    test::showcount();      //count = 3

    t1.showcode();      //for t1 objects, code value is 1
    t2.showcode();      //for t1 objects, code value is 2
    t3.showcode();      //for t1 objects, code value is 3

    return 0;

}
