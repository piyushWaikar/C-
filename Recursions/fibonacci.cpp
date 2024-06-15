#include <iostream>
using namespace std;

int fib(int a)
{
    if (a < 2)
    {
        return 1;
    }
    return fib(a - 2) + fib(a - 1);
}

int main()
{
    int a;
    cout << "Enter the position : ";
    cin >> a;

    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;

    return 0;
}