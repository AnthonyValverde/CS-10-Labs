#include <iostream>
#include <string>
using namespace std;

int main() {

   int number = 0;
   int magnitude = 0;
   
   cout << "Enter an integer: " << endl;
   cin >> number;
   
   if (number < 0) {
      magnitude = (number * (-1));
      cout << "The magnitude of "<< number << " is " << magnitude;
   }
   
   else { 
      cout << "The magnitude of " << number << " is "<< number;
   }
   return 0;
}


107 / 20 = num1 
answer = originalnum - (denom * num1)