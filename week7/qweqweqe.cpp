#include <iostream>
#include <cstdlib>
using namespace std;

    
double percentHeads (double coinTosses, double heads) {
    
    srand(4444);
    double chance = 0.0;
    int tails = 0;
    cin >> coinTosses;
    int i = 0;
    
    for (i = 1; i < coinTosses; ++i){
      if ((rand() % 2) == 0) {
        heads = heads + 1;
}
    
    else {
        tails = tails + 1;
}
}
        
chance = (heads/ coinTosses) * 100;
    return chance;
}        
    
int main () {
    
    double heads = 0.0;
    double coinTosses = 0.0;
    double chance = 0.0;
    
     cout << "Enter the number of times you want to toss the coin: " << endl;
    chance = percentHeads(coinTosses, heads);
   
    cout << "Heads came up " << chance << "% of the time." << endl;
   
   return 0;
}