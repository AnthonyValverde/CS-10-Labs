#include <iostream>

using namespace std;

int main()
{
   char c = '-';
   
   cout << "Enter a character: ";
   cin >> c;
   
   if ( c >= 97) {
      cout << "You entered a lowercase alphabetic character." << endl;
}
  
   else if (c >= 65) {
      cout << "You entered an uppercase alphabetic character." << endl;
}
   else if (c >= 48) {
      cout << "You entered a numeric digit." << endl;
}

   else {
      cout << "You did not enter a alphanumeric character." << endl;
}
   return 0;
}