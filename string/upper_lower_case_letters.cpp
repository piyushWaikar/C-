#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="lowertoupper";

    cout<<"Distace from lower to upper case : "<<'a'-'A'<<endl;      // 32 letters far lowercase letter are from uppercase . 

    // convert into lower to upper case .

    for(int i=0; i<str.size(); i++){     // str.size gives the size of char .
        if(str[i] >='a' && str[i]<='z')
            str[i] -= 32;                // 32 because according to ascii value lower case letter are 32 no.s away from uppercase no.s .
    }
    cout<<str<<endl;
    

    // Convert into upper to lower case .

    for(int i=0; i<str.size(); i++){     
        if(str[i] >='A' && str[i] <= 'Z')
            str[i] += 32;
    }

    cout<< str << endl;

  return 0;

}