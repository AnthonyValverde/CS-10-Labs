#include <iostream>
#include <cstdlib>
using namespace std;

    
double percentHeads (int coinTosses) {
    
    int heads = 0.0;
    int tails = 0;
    int i = 0;
  
 for (i = 2; i <= coinTosses; ++i){
      if ((rand() % 2) == 0) {
        heads = heads + 1;
}
    
    else {
        tails = tails + 1;
}
}  
    
    return (static_cast<double>((heads)) /coinTosses) * 100; 

}        
    
int main () {
    srand(4444);
    int coinTosses = 0;
    double chance = 0;
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> coinTosses;
    
    chance = percentHeads(coinTosses);
   
    cout << endl;
    if (coinTosses == 0) {
        cout << "Heads came up 0% of the time." << endl;
    }
    else {
    cout << "Heads came up " << chance << "% of the time." << endl;
    }
   return 0;
}