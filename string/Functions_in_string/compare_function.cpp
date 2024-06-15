#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1="abc";
    string s2="xyz";

    // so as we use compare function , it gives 1 for not equal and zero for equal due to difference of ASCII value .

    cout<<s2.compare(s1)<<endl;  


  //  different way of representation .

  if(s1.compare(s2)){
    cout<<"string not equal "<<endl;
  } else {
    cout<<"string is equal ";
  }

return 0;

}
