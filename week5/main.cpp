#include <iostream>
#include <string>
using namespace std;

int main() {
   int j = 0;
   char a = '-'; 
   int trunkHeight = 0;
   int trunkWidth = 0;
   int leavesWidth = 0;
   int i = 0;
   int k = 0;
   int l = 0;
   int m = 0;
   int n = 0;
   int o = 0;
   int amountofSpaces;

   cout <<  "Enter trunk height: ";
   cin >> trunkHeight;
   cout << "Enter trunk width: ";
   cin >> trunkWidth;
   cout << "Enter leaves width: " << endl;
   cin >> leavesWidth;
    
   
   

   while ((leavesWidth % 2) == 0) {
   cout << "Please enter an odd number for the width";
   cin >> leavesWidth;
}
   
   
    leavesWidth = ((leavesWidth + 1) / 2);
    
    for(i = 1; i <= leavesWidth; ++i) {
         
           for(k = (leavesWidth - i); k >0; --k){
           cout << " ";
           } 
          for(j = 1; j <= ((i *2) -1); ++j){
              cout <<"*";
         
    }
    cout << endl;
    }   
    
    leavesWidth = ((leavesWidth * 2) - 1);
   
    
      for(l = 1; l <= trunkHeight; ++l){
        for (n = 1; n <= (((leavesWidth - trunkWidth) / 2)); ++n){
            cout << " ";
        }
            for (m = 1; m <= trunkWidth; ++m){
            cout << "*";
        }
      cout << endl;
}
   return 0;
}


 