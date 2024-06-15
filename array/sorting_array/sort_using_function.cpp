#include <iostream>
#include <algorithm> // To use sort function we need this header file .
using namespace std;

int main()
{
    int arr[5] = {25, 56, 12, 98, 34};

    sort(arr, arr + 5); // Function sort ==> sort(variable name , name + how many elements to be sorted) .

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}