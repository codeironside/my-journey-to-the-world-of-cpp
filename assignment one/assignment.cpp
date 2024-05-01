#include <iostream>
#include <cmath>

using namespace std;
int main()
{

cout<< "programm to give u three times your input plus one \n";
int X; int Y;
cout<< "enter your Number :\n";
cin>> X;
Y = pow(X,3) + 1;
float f = Y;
double d = Y;
long L = Y;
cout<<"your answer is "<< Y << "\n";
cout<<"your answer as float is "<< f << "\n";
cout<<"your answer as double is "<< d << "\n";
cout<<"your answer as long is "<< L << "\n";
return 0;
}
