
//Find the maximum and minimum of giving numbers .

#include<iostream>
using namespace std;

int main() {
     int n;
    cout<<"Enter array size : ";
    cin>>n;

    int array[n];
    int maxNo;
    int minNo;

    for( int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
         maxNo=max(maxNo,array[i]); //max is a inbuilt function to find the maximum of numbers .
         minNo=min(minNo,array[i]); //min is a inbuilt function to find the minimum of numbers .
    }

    cout<<maxNo<<" ";
    cout<<minNo<<" ";    
        
    
    return 0;
}




