#include <iostream>

using namespace std;
int main(){
cout<< "#---centigrade and fahrenheit converter---#\n";
float answer, type,temp;
cout << "for C-f, enter 1, for F-C, press 2:\n";
cin>>type;
cout << "enter the temperature :\n";
cin>>temp;
if(type == 1){
    answer=9/5*(temp+32);
    cout<< "the conversion from C-F is "<< answer<< " fahrenheit"<< "\n";
}
else if(
     type ==2
        )
        {
             answer=(temp-32)*5/9;
    cout<< "the conversion from F-C is "<< answer<< "celcius"<< "\n";


}
else{
    cout<< "no or wrong input\n";
     return 1;
}
return 0;
}
