#include <iostream>
#include <cmath>
using namespace std;

int main() {
      double r = 0.0;
    double z = 0.0;
    double volume = 0.0;
    
    cin >> r >> z;
    volume =  4/3 * (pow((r),3) * z);
    cout << "Volume is: " << volume << endl;
    
    return 0;
}   