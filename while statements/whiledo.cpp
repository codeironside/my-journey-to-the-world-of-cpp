#include <iostream>

using namespace std;
int main(){

float invar;
/*cout <<" enter a positive number : ";
cin>>invar;
while(invar<=0){
    cout <<" enter a positive number : ";
cin>>invar;
}
cout <<" your positive number was "<<invar<< "\n";
*/
do {
cout << "Enter a positive number: " ;
cin >> invar; cout << "\n";
cout << "You said: " << invar << "\n";
} while (invar<=0);
cout << "Your positive number was: "
<< invar << "\n";
}
