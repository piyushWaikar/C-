#include <iostream>
using namespace std;

int c = 45; // --> Global variable have an fix value through the program define by the user .

int main()
{
    int a, b, c;
    cout << "Enter the a : ";
    cin >> a;
    cout << "Enter the b : ";
    cin >> b;

    c = a + b;
    cout << "local variable : " << c << endl;
    cout << "Global variable: " << ::c << endl; // ' :: ' --> this is known as scope resolution operator .

    return 0;
}
