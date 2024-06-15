
#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "nincompoop";
    cout<<s1<<endl;

    s1.erase(3 , 3);    // erase function ==> erase( index from which to delete , how much character we have to delete ) .

    cout<<"After erase function : "<<s1;

 return 0 ;

}