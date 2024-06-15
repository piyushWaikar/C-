#include <iostream>
#include <iomanip> // To use manipulator , we have to add this header file .
// There are two types of manipulator . 1] 'endl' fuction . 2] 'setw' fuction .

using namespace std;

int main()
{
    int a = 3, b = 45, c = 67;

    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;

    cout << "The value of a with setw is : " << setw(8) << a << endl; // Add spaces before the output .
    cout << "The value of b with setw is : " << setw(8) << b << endl;
    cout << "The value of c with setw is : " << setw(8) << c << endl;

    return 0;
}