
#include <iostream>
#include <cmath>   
#include <iomanip> 

using namespace std;

int main() {
    double base, exponent;

    cout << "Input the base: ";
    if (!(cin >> base)) {
        cout << "Invalid Base Input" << endl;
        return 0;
    }

    cout << "Input the exponent: ";
    if (!(cin >> exponent)) {
        cout << "Invalid Exponent Input" << endl;
        return 0;
    }

    
    double result = pow(base, exponent);

    
    if (result == (long long)result) {
        cout << (long long)result << endl; 
    } else {
        cout << fixed << setprecision(6) << result << endl;
    }

    return 0;
}
