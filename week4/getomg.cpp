#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main ()
{
    int i = 0;
    int g = 0;
    
    cout << "Enter a number: ";
    cin >> g;
    
    while (g > 1) {
        if (g % 2 == 0) {
       cout << g << " " <<endl;
       g = (g / 2);
}
    
        else {
        cout << g << " " << endl;
        g = ((g * 3) + 1);
}
}
    return 0;
}