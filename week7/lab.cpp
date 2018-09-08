#include <iostream>
using namespace std;

int add (int num1, int num2){
   int sum = 0;
   sum = num1 + num2; 
return sum;
}

int subtract (int num1, int num2) {
   int diff = 0; 
   diff = num1 - num2;
return diff;
}
   
int main() {
   int num1 = 0;
   int num2 = 0;
   int sum = 0; //sum of numbers
   int diff = 0; //difference of numbers

   
   cout << "Enter the first integer: ";
   cin >> num1;
   cout << "Enter the second integer: "<< endl;
   cin >> num2;
   cout << endl;
   
   cout << "First Integer: " << num1 << endl;
   cout << "Second Integer: " << num2 << endl;
   
   cout << endl;// FIXME (3) Prompt user for ints and print them

   // Call add function
   sum = add(num1, num2);

   diff = subtract(num1, num2);// FIXME (4) Call subtract function


   cout << num1 << " + " << num2 << " = " << sum << endl;// FIXME (6) Output result of num1 + num2


   cout << num1 << " - " << num2 << " = " << diff <<  endl;// FIXME (8) Output result of num1 - num2


   return 0;
}