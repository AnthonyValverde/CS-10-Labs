#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double xcord = 0.0;
    double ycord = 0.0;
    double xcord2 = 0.0;
    double ycord2 = 0.0;
    double answer = 0.0;
    
    cin >> xcord >> ycord;
    cin >> xcord2 >> ycord2;
    double temp = pow((xcord2 - xcord),2);
    double temp2 = pow((ycord2 - ycord),2);
    answer = sqrt(temp + temp2);
    cout << "The answer is: " << answer;
    cout << endl;
    
    return 0;
}