#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r = 0.0;
    double z = 0.0;
    double area = 0.0;
    double circum = 0.0;
    
    cin >> r >> z;
    area = (z * (r * r));
    circum = ((2 * z) * r);
    cout << "Enter circumference: " << circum << endl;
    
    cout << "Enter area: " << area << endl;
    return 0;
}