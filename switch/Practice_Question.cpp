
// eg- An Robot has 4 Button on it , if we press one of them it greet us in 4 differnt languages .

#include<iostream>
using namespace std;

int main () {
     char Button;

     cout<<"Press the Button : ";
     cin>>Button;

     switch (Button) {
        case 'a':
        cout<<"Namaste"<<endl;
        break;
         case 'b':
        cout<<"Ciao"<<endl;
        break;
         case 'c':
        cout<<"Hello"<<endl;
        break;
         case 'd':
        cout<<"Bonjour"<<endl;
        break;

        default:
        cout<<"I am learning more";

     }
     return 0;
}
