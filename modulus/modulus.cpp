#include <iostream>
using namespace std;
int main()
{
float n1; float n2;
cout << "#----------implement a program that find the number of two number without using th % operator---------------#\n";
cout << "enter your first number :\n";
cin>>n1;
cout<<"enter your second number :\n";
cin>>n2;
while(n1>=n2){
    n1-=n2;
}
float result = n1;
cout << "your result for "<<result<<"\n";

return 0;

}
