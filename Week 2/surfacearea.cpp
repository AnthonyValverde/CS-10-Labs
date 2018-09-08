#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r = 0.0;
    double z = 0.0;
    double area = 0.0;
    
    cin >> r >> z;
    area =  (4 * z * (r * r));
    cout << "Area is: " << area << endl;
    
    return 0;
}