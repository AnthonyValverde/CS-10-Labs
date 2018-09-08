#include <iostream>
#include <string>
using namespace std;

int main() {
   int numRows = 0;
   char a = '-'; 
   int i = 0;
   int j = 0;
   
   cout << "Enter a character: ";
   cin >> a;
   cout << "Enter number of rows: " << endl;
   cin >> numRows;
      
      for(i = 1; i <= numRows; ++i) {
         for(j = 1;  j <= numRows - i; ++j ){
               cout << "  ";
            
            }
         for(j =0; j < numRows; ++ j) {
            if(j >= numRows - i) {
               cout << a << " ";
            }
         }
      cout << endl;
}
 
   return 0;
}
   return 0;
}