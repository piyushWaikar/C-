
// In this function two strings got append(join).

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "fam";
    string s2 = "ily";

    // Alternate method .

    cout<<"addition method : "<<s1+s2 <<endl;


    // append method .

    s1.append(s2);    // In this function s2 line get join into s1 .
    cout<<"append method : "<<s1<<endl;


    return 0 ;
}