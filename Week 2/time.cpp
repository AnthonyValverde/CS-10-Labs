#include <iostream>
#include <ctime>
using namespace std;


int main ()
{ 
        int secs = 0;
        int mins = 0;
        int hours = 0;
        
        int s = time(0);
        cout << "Seconds since the start of time: " << S << endl;
        
        secs = s % 60;
        cout << "Seconds since last minute:" << secs << endl;
        
        mins = (s % 3600) /60
        cout << "minutes since last hour: " << mins << endl;
        
        hours = s / 3600
        
        return 0;
}