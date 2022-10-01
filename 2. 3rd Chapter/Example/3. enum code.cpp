#include <iostream>
using namespace std;

enum level {circle,
            rectangle,
            triangle
           };

int main()
{
    int code;
    cout << "Enter your shape code:";
    cin >> code;

    switch (code)
    {
    case circle:
        cout << "The shape is circle" << endl;
        break;
    case rectangle:
        cout << "The shape is rectangle" << endl;
        break;
    case triangle:
        cout << "The shape is triangle" << endl;
        break;
    default:
        cout << "You made an illegal choice." << endl;
    }


    cout << "Bye.....";

    return 0;
}
