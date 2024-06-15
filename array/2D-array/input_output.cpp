#include<iostream>
using namespace std;

int main () {
    int n,m;
    
    cout<<"Enter nxm : ";
    cin>>n>>m;

    int arr[n][m];

    cout<<"Enter matrix Elements : "<<endl;
// Input of array .
    for ( int i=0; i<n; i++){
        for( int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix : \n";
// Output of matrix .
    for ( int i=0; i<n; i++){
        for ( int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

// To find the number in matrix .

int x;
cout<<"Enter the element to found : ";
cin>>x;

bool flag = false;
for(int i=0; i<n; i++){
    for( int j=0; j<m; j++){
        if(arr[i][j] == x){
            cout<<"possion is : "<<i+1<<" "<<j+1<<endl;
            flag=true;
        }

    }
}  

if(flag){
    cout<<"Element found";
} else {
    cout<<"Element not found";
}


}


