
// In order to use sort inbuilt function we need to use one header file that is : 

#include<algorithm>    // for inbuilt sort function .

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "cbazxyqtril";

    sort( s1.begin() , s1.end() );   // sort ==> sort( starting point , end point ) .

    cout<< s1 << endl;

    return 0;
}