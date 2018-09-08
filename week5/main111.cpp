#include <iostream>
#include <string>
using namespace std;

int main() {
   int numRows = 0;
   char a = '-'; 
   int i = 0;
   int j = 0;
   int k = 0;
   
   cout << "Enter a character: " << endl;
   cin >> a;
   cout << "Enter number of rows: " << endl;
   cin >> numRows;
      
      for(i = numRows; i <= 1; --i) {
         for(j = numRows; j <= i; --j ){
            if(i >= j){
               cout << a << " ";
               }
            }
      cout << endl;
}
   return 0;
}