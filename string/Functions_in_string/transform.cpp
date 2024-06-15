#include<iostream>
#include<string>
#include<algorithm>    // To use transform function .

using namespace std;

int main(){
    string s = "cadbury";

    transform(s.begin() , s.end() , s.begin() , ::toupper);
//  transform(select from where , to where , from where to start capitalize , to which we have to convert upper or lower) .

    cout << s << endl;


    // Now the string s1 gets in uppercase then we have to convert it into lowercase .

    transform(s.begin() , s.end() , s.begin() , ::tolower);

    cout << s << endl;


    return 0;
}