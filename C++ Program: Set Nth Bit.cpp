
#include <iostream>
using namespace std;

int main() {
    double num_in, bit_in;
    
    cout << "Enter Number: ";
    if (!(cin >> num_in)) {
        cout << "Invalid Number Input" << endl;
        return 0;
    }

    cout << "Enter bit number you wish to set: ";
    if (!(cin >> bit_in)) {
        cout << "Invalid Bit Input" << endl;
        return 0;
    }

    
    int number = (int)num_in;
    int n = (int)bit_in;

    
    if (n < 0 || n >= 31) {
        cout << "Invalid bit position." << endl;
    } else {
        
        int result = number | (1 << n);
        
        cout << "Bit set Successfully" << endl;
        cout << "Answer: " << result << endl;
    }

    return 0;
}
