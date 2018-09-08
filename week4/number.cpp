#include <iostream>
#include <string>

using namespace std;

int main()
{
   string sentence;
   string sentence1;
   cout << "Enter a sentence: " << endl;
   
   getline(cin, sentence);
   sentence1 = toupper(sentence);
   cout << sentence;
   
   return 0;
}