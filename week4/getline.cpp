#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main ()
{

    string name;
    int anthony = 0;
    
    cout << "Please enter a word: ";
    cin >> name;
    cout << name << endl;
    cout << toupper(name);
    
    
    return 0;
}