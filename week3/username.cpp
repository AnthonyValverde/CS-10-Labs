#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main ()
{

    string sentence;
    char mi = '-';
    string lastName;
    
    getline(cin, sentence);
    
    
    cout << static_cast<char>( tolower(sentence.at(0)) );
 
    
    cout << endl;
    
    return 0;
}