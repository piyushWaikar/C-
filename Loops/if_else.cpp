#include<iostream>
using namespace std;

int main() {

    int savings;
    cin>>savings;

    if(savings<5000) {

        if(savings<=2000){
            cout<<"Dinner";
        } else {
            cout<<"Road Trip";
        }
    }
    else if(savings>5000 && savings<20000 ){
        
        if(savings<7000) {
            cout<<"Goa";
        } else {
            cout<< "Ladhak";
        }
    }

        else{
            cout<<"Buy Gold" ;
        }
    
    return 0 ;
}