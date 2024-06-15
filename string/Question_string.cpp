
// Question ==> Form the biggest number from the numeric string .

#include<iostream>
#include<string>
#include<algorithm>    // To use sort function .

using namespace std;

int main(){

    string s = "478392029";

    sort(s.begin() , s.end() , greater<int>());
//  sort(select from where to , to where , to start with) .

cout<< s << endl;

return 0;

}
