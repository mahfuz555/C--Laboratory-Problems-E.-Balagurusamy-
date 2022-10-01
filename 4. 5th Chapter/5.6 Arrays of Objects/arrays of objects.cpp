#include<iostream>
using namespace std;

class employee
{
    char name[30];
    int age;

public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void)
{
    cout<<"Enter your name: ";
    cin >> name;
    cout <<"Enter your age: ";
    cin>>age;
}

void employee::putdata(void)
{
    cout <<"Name: "<<name<<endl;
    cout <<"Age: "<<age<<endl;
}

int main()
{
    employee manager[3];
    for(int i = 0; i<3;i++)
    {
        cout<<i+1<<"."<<"Details of manager:" << endl;
        manager[i].getdata();

    }

    cout<<endl;

        for(int i = 0; i<3;i++)
    {
        cout<<i+1<<"."<<"Manager:" << endl;
        manager[i].putdata();

    }

    return 0;

}
