#include <iostream>
#include <string>
using namespace std;

int main () {

    char one = '-';
    char two = '-';
    char three = '-';
    char four = '-';
    char five = '-';
    char six = '-';
    char seven = '-';
    char eight = '-';
    
    cout << "Enter Code: ";
    cin >> one >> two >> three >> four >> five >> six >> seven >> eight;
    cout << static_cast<char>(one -7) << static_cast<char>(two - 7) << static_cast<char>(three - 7);
    cout << static_cast<char>(four - 7) << static_cast<char>(five - 7) << static_cast<char>(six - 7);
    cout << static_cast<char>(seven - 7) << static_cast<char>(eight - 7) << endl;

return 0;
}