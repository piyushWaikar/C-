
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Dvisible by both";
    } else if (n%2==0) {
        cout<<"divisible by 2";
    } else if (n%3==0){
        cout<<"Divisible by 3";
    }
    else {
        cout<<"Not Divisible by any Number";
    }

    return 0;
}