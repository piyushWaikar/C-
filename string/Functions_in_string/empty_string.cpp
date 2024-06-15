#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "abc";
    s1.clear();        // this function is used to clear string .
    
    if (s1.empty()){     // this function is used to check the string wether the string is empty or not .
        cout<<"String is empty";
    }

    return 0;
}
