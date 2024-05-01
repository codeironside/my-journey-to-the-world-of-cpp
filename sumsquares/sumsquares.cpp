#include <iostream>
using namespace std;
int main()
{

int lower_bound = 0,  sum{0};
for (int var = 1; var < 10;var++){
    sum +=var*var;
}
cout << sum<< "\n";
return 0;
}
