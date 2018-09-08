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
   
    for (i = 1; i <= amtOfRolls; ++i){ 
       int die1 = ((rand() % 6) + 1);
       int die2 = ((rand() % 6) + 1);
   
   
    if ( (die1 + die2) == 2 ){
     num2 = num2 + 1;
     }                             
     
   
     
    else if ( (die1 + die2) == 3){
    num3 = num3 + 1;
    }       
     
    else if ((die1 + die2) == 4){
    num4 = num4 + 1;
    }            
    
    else if ((die1 + die2) == 5){
    num5 = num5 + 1;
    }            
    
    else if ((die1 + die2) == 6){
    num6 = num6 + 1;
    }            
    
    else if ((die1 + die2) == 7){
    num7 = num7 + 1;
    }            
        
    else if ((die1 + die2) == 8){
    num8 = num8 + 1;
    }            
        
    else if ((die1 + die2) == 9){
    num9 = num9 + 1;
    }            
    
    else if ((die1 +die2) == 10){
    num10 = num10 + 1;
    }           
        
    else if ((die1 + die2) == 11){
    num11 = num11 + 1;
    }            
    
    else if ((die1 + die2) == 12){
    num12 = num12 + 1;
    }            
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
     cout << "12: " << num12;

   
   cout << endl;   
   cout << "Probability of rolling each possible score" << endl;
   // Output percentage table
   
   
   cout << "2: " << (static_cast<double>(num2)/ static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "3: " << (static_cast<double>(num3) /static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "4: " << (static_cast<double>(num4)/ static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "5: " << (static_cast<double>(num5) /static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "6: " << (static_cast<double>(num6) / static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "7: " << (static_cast<double>(num7) / static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "8: " << (static_cast<double>(num8) / static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "9: " << (static_cast<double>(num9) / static_cast<double> (amtOfRolls)) * 100 << "%" << endl;
   cout << "10: " << (static_cast<double>(num10) / static_cast<double>(amtOfRolls)) * 100 << "%" << endl;
   cout << "11: " << (static_cast<double>(num11) / static_cast<double>(amtOfRolls)) * 100 << "%" << endl;
   cout << "12: " << (static_cast<double>(num12) /static_cast<double>(amtOfRolls)) * 100 << "%" << endl;
      
   
   return 0;
}