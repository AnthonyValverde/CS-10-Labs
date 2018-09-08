#include <iostream>
#include <string>
using namespace std;

int main() {
   int numRows = 0;
   char a = '-'; 
   int i = 0;
   int j = 0;
   int k = 0;
   
   cout << "Enter a character: ";
   cin >> a;
   cout << "Enter number of rows: " << endl;
   cin >> numRows;
      
      for(i = 1; i <= numRows; ++i) {
         for(j = numRows; j <= 1; --j ){
            if(i >= j){
               cout << a << " ";
            }
            }
      cout << endl;
}
   return 0;
}