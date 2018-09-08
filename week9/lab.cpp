// FIXME - VECTOR LIBRARY
#include <cmath>
#include <iostream>

using namespace std;

void fillVector() //(3) FIXME - Add Parameter
{
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
      //(3) FIXME - Add numbers to vector
    }
    cout << endl;

    return;
}

double meanVector(const vector <double> &v) {

   //(4) FIXME - Calculate mean of vector numbers
   return;
}

double varianceVector(double vectorAvg, const vector <double> &v) {

   //(5) FIXME - Calculate variance of vector numbers
   return;
}

double standardDeviationForVariance(double vectorVariance) {

   //(6) FIXME - Calculate standard deviation
   return;
}

int main() {
   //(3) FIXME - Declare vector of doubles
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   unsigned int i = 0;

   //(3) FIXME - Call fillVector() function

   cout << "You entered: ";
   //(3) FIXME - Print vector values (use i variable)

   //(4) FIXME - Call meanVector() function

   //(5) FIXME - Call varianceVector() function

   //(6) FIXME - Call standardDeviationForVariance() function

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}