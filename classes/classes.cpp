#include <cmath>
#include <iostream>
class Point{
private:
    float r, s;
public:
    Point(float x, float y){
    r=x, s=y;
    }
    float distance_to_origin(){
        return sqrt(r*r + s*s);
    }

};

using namespace std;
int main(){
Point p1(1.0,1.0);
float d = p1.distance_to_origin();
cout<<d<< "\n";
return 0;
}


