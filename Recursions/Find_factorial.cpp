
// Recursion is the method in which function call itself until the end condition gets satisfies .

#include <iostream>
using namespace std;

int findfactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * findfactorial(n - 1);
}

int main()
{

    int a;

    cout << "Enter the number : ";
    cin >> a;

    cout << "The factorial of " << a << " is " << findfactorial(a) << endl;

    return 0;
}