#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;  
    int b = 0;
    int c = 0;
    int quadraticFormula = 0; 
    int quadraticFormula1 = 0;
  
    cin >> a >> b >> c;
    quadraticFormula = (-b + sqrt((b * b) - (4 * a  * c))) / (2 * a);
    quadraticFormula1 = (-b - sqrt((b * b) - (4 * a  * c))) / (2 * a);
    cin >> a = 1; >> b = -1 >> c = -4;
    
    cout << quadraticFormula << quadraticFormula1 << endl;
    
    return 0;
}