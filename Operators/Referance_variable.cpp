#include<iostream>
using namespace std;
int main()
{
    float x = 4.5;
    float & y = x;  // & y points towards the x is known as reference variable .

    cout<<x<<endl;
    cout<<y<<endl;
    
      return 0;
}