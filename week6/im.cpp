#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main ()
{
 int height = 0;
 int j = 0;
 int i = 0;
 cin >> height;
 
    for( i = 0; i <= height; ++i){
        for(j = 5; j <= height; j = (j - 2)){
          
            if (j >= 0){
                cout << "*";
            }
       
                
            
        }
    }
       return 0;
}