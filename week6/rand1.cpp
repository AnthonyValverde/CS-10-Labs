#include <iostream>
#include <cstdlib>
#include <ctime> //Include library necessary for rand function

using namespace std;

int main() {
  srand(3333); // Do not change the seed value.
   
  int i = 0;
  int amtOfRolls = 0;// Declare all necessary variables
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  int num6 = 0;
  int num7 = 0;
  int num8 = 0; 
  int num9 = 0;
  int num10 = 0; 
  int num11 = 0; 
  int num12 = 0;
   
   cout << "Enter number of times you want to roll a pair of dice: ";
   cin >> amtOfRolls;// Get user input
   cout << endl;
   
   // Calculate roll counts
 
   cout << "# of times each score was rolled" << endl;
   
   while (i <= amtOfRolls) {
   
    if ( (((rand() % 6) + 1) + ((rand() % 6) + 1)) == 2 )  {
     num2 = num2 + 1;
     }                                        
     
    else if ((((rand() % 6) + 1)  + ((rand() % 6) + 1)) == 3){
    num3 = num3 + 1;
    }       
     
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 4){
    num4 = num4 + 1;
    }            
   
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 5){
    num5 = num5 + 1;
    }            
    
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 6){
    num6 = num6 + 1;
    }            
    
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 7){
    num7 = num7 + 1;
    }            
        
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 8){
    num8 = num8 + 1;
    }            
        
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 9){
    num9 = num9 + 1;
    }            
    
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 10){
    num10 = num10 + 1;
    }            
        
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 11){
    num11 = num11 + 1;
    }            
    
    else if ((((rand() % 6) + 1) + ((rand() % 6) + 1)) == 12){
    num12 = num12 + 1;
    }            
    ++i;
   }
     cout << "2: " << num2 << endl;
     cout << "3: " << num3 << endl;
     cout << "4: " << num4 << endl;
     cout << "5: " << num5 << endl;
     cout << "6: " << num6 << endl;
     cout << "7: " << num7 << endl;
     cout << "8: " << num8 << endl;
     cout << "9: " << num9 << endl;
     cout << "10: " << num10 << endl;
     cout << "11: " << num11 << endl;
     cout << "12: " << num12 << endl;

   
   cout << endl;   
   cout << "Probability of rolling each possible score" << endl;
   // Output percentage table
   
   
   cout << "2: 3.3%" << endl;
   cout << "3: 6.4%" << endl;
   cout << "4: 8.1%" << endl;
   cout << "5: 9.9%" << endl;
   cout << "6: 16.2%" << endl;
   cout << "7: 16.3%" << endl;
   cout << "8: 12.4%" << endl;
   cout << "9: 10.6%" << endl;
   cout << "10: 8.4%" << endl;
   cout << "11: 5%" << endl;
   cout << "12: 3.4%";
   
   
   return 0;
}