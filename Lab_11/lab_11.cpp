#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;
class Point{
public:
    Point(int brand, int yearOfManufacture, int color);
private:
    int x, y, z;
};
Point::Point(int brand, int yearOfManufacture, int color){
    x=brand;
    y=yearOfManufacture;
    z=color;
}
int main(){
    string a,b;
    string c(a);
    string d("One");


}

