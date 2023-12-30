#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number=" << endl;
    cin >> a;
    cout << "Enter second number=" << endl;
    cin >> b;
    int o;
    cout << " Enter 1 for addtion\n Enter 2 for subtraction\n Enter 3 for multiplication\n Enter 4 for division" << endl;
    cout << "Enter your choice=" << endl;
    cin >> o;
    switch (o)
    {
    case 1:
        cout << "Addtion=" << a + b << endl;

        break;
    case 2:
        cout << "Subtraction=" << a - b << endl;
        break;
    case 3:
        cout << "Multiplication=" << a * b << endl;
        break;
    case 4:
        if (b == 0)
        {
            cout << "Invalid division" << endl;
        }
        else
        {
            cout << "Division=" << a / b << endl;
        }
        break;

    default:
        cout << "Invalid operator" << endl;
        break;
    }
}