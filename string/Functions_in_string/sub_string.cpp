#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "nincompoop";

    string s2 = s1.substr(6 , 4);  // sub string ==> substr( from where , how many character ) .
    cout << s2 ;

    return 0;
}