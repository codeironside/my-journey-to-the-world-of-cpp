#include <vector>
#include <iostream>

using namespace std;
//using std::vector;
int main (){
vector<int> evens{0,2,4,56,8,10};
vector<float> halves{0.5,1.5,2.5};
auto halfloats = {0.5f,0.3f,1.5f};
cout<< evens.at(0) << "\n";
return 0;
}
