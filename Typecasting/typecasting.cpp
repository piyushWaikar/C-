
// Typecasting is used to change the type of variable .

#include <iostream>
using namespace std;
int main()
{
    int x = 60;
    cout << "The value of x is : " << float(x) << endl;

    float y = 45.55;
    cout << "The value of y is : " << int(y) << endl<<endl;

    cout << "The expression is : " << x + y << endl;
    cout << "The expression is : " << x + int(y) << endl;
    cout << "The expression is : " << x + (int)y << endl;

    return 0;
}