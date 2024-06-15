
// Print the Prime numbers between 2 given numbers by user . 

#include<iostream>
using namespace std ;

int main() {
    int a,b;
    cout<<"Enter 2 values :";
    cin>>a>>b;
    
    int i;
    for( int num=a ; num<b ; num++) {
        for( i=2; i<num; i++){
            if(num % i == 0){
                break;
            }
        }
        if(i == num) {
            cout<<"Prime Numbers are :";
            cout<<num<<endl;
        }
    }

   
    return 0;
}