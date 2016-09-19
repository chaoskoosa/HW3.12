/* 
 * File:   main.cpp
 * Author: Matt Koosa
 *
 * Created on September 19, 2016, 2:32 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*Program used to calculate Fahrenheit to Celsius conversion.
 */
int conversion(int);

int main(int argc, char** argv) {
    int F, C;
    
    cout << "Please enter a degrees Celsius" << endl;
    cin >> C;
    
    F = conversion(C);
    
    cout << "Your degrees converted Fahrenheit is: " << F << " degrees";
 
    
    return 0;
}

int conversion(int Ctemp)
{
    int FC;
    FC = (9/5) * Ctemp + 32;
    
    return FC;
}
