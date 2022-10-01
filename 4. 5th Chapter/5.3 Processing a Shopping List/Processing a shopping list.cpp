#include<iostream>
#include<iomanip>
using namespace std;

class shoppingList
{
    string itemName;
    int quantity;
    float rate;
public:
    void getitems()
    {
      cout<<"Enter your item: ";
      cin>>itemName;
      cout<<"Enter your quantity: ";
      cin>>quantity;
      cout<<"Enter your rate: ";
      cin>>rate;
    }

    void printitems()
    {
        cout<<setw(10)<< itemName;
        cout<<setw(10)<<quantity;
        cout<<setw(10)<<rate;
        cout<<setw(10)<<quantity*rate<<endl;
    }
};


int main()
{
    int n;
    cout<<"Enter the number of items: ";
    cin>>n;
    shoppingList items[n];
    for(int i=0; i<n; i++)
    {
        items[i].getitems();
    }
    cout<<"Shopping List: "<<endl;
    cout<<setw(10)<<"ItemName"<<setw(10)<<"Quantity"<<setw(10)<<"Rate"<<setw(10)<<"Amount"<<endl;

    for(int i=0;i<n;i++)
    {
        items[i].printitems();
    }

    return 0;
}
