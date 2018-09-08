#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main ()
{

    string name;

    cout << "Enter text: " << endl;
    getline(cin, name);
    cout << "You entered: " << name << endl;
    
    int i = 0;

     for (i = 0; i <= 1; ++i) { 
     
     if ((name.find("BFF") != string::npos)){
         (name.replace(name.find("BFF"), 3, "best friend forever"));
        //cout << "BFF: best friend forever" << endl;
}
    if (name.find("IDK") != string::npos) {
        (name.replace(name.find("IDK"), 3, "I don't know"));
       //cout << "IDK: I don't know" << endl;
    }  
    
    if (name.find("JK") != string::npos) {
        (name.replace(name.find("JK"), 2, "just kidding"));
        //cout << "JK: just kidding" << endl;
}
    if (name.find("TMI") != string::npos) {
        (name.replace(name.find("TMI"), 3, "too much information"));
       // cout << "TMI: too much information" << endl;
    }   
    if (name.find("TTYL") != string::npos) {
        (name.replace(name.find("TTYL"), 4, "talk to you later")); 
   cout << "TTYL: talk to you later" << endl;
}
}

        cout << "Expanded: " << name << endl;
    return 0;
}