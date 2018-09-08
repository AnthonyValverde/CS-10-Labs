#include <iostream>
using namespace std;

void multiply (double num1, double num2, double& prod){
   prod = (num1 * num2);
   return;
   }
   // FIXME (3) multiply function

void  divide (double num1, double num2, double& quot){
   quot = (num1/num2);
   return;
   }
   // FIXME (5) divide function


int main() {
   double num1 = 0.0;
   double num2 = 0.0;
   double prod = 0.0; //product of numbers
   double quot = 0.0; //quotient of numbers

   cout << "Enter the first floating point number: " << endl;
   cin >> num1;
   cout << "Enter the second floating point number: " << endl;
   cin >> num2;
   cout << endl;
   
   cout << "First floating point number: " << num1 << endl;
   cout << "Second floating point number: " << num2 << endl;
   cout << endl;
   
   // FIXME (1) Prompt user for floating point numbers (type double) and print them

   //Call multiply function
   multiply(num1, num2, prod);

   divide(num1, num2, quot);// FIXME (2) Call divide function


   cout << num1 << " * " << num2 << " = " << prod << endl;
   // FIXME (4) Output result of num1 * num2

   cout << num1 << " / " << num2 << " = " << quot << endl;
   // FIXME (6) Output result of num1 / num2


   return 0;
}