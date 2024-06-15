#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Reverse order array are : "<<endl;
    for (int i = n - 1; i > -1; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}