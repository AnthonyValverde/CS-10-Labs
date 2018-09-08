#include <iostream>
#include <string> // FIXME include string library
using namespace std;

int main() 

string userInput;
      
      cout << "Enter a word: " << endl;
      cin >> userInput;
      cout << "You entered: " << userInput << endl;
      
      cout << "New word: ";
      
      int i = 0;
      
   for(i=0; i < userWord.size(); i++){
      if (userWord.at(i) == 'a')
      userWord.at(i) = '@';
   }
   else if (userWord.at (i) == 'e'){
      userWord.at(i) = '3';
   }
   else if (userWord.at (i) == 'i') {
      userWord.at(i) = '!';
   }
     else if (userWord.at (i) == 'g') {
      userWord.at(i) = '9';
   }
     else if (userWord.at (i) == 's') {
      userWord.at(i) = '$';
   }
    else if (userWord.at (i) == 'x') {
      userWord.at(i) = '*';
   }
   cout << userInput << endl;
   return 0;
}