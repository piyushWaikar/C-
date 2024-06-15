#include<iostream>
using namespace std;

int main () {
int n;
cout<<"Enter array size : ";
cin>>n;

int array[n];

    for(int i=0; i<n; i++) {  // i<n = because of 0 based indexing
        cin>>array[i];
    } 
    
    for(int i=0; i<n; i++) {
    cout<<array[i]<<" ";
    }

    return 0;
}