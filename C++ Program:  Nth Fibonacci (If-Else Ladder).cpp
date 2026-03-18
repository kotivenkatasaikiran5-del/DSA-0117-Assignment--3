
#include <iostream>
using namespace std;

int main() {
    double input;
    cout << "Enter the value of N: ";

    
    if (!(cin >> input)) { 
        
        cout << "Invalid Input" << endl;
    } 
    else if (input < 0) { 
        
        cout << "Invalid Input: Negative number" << endl;
    } 
    else if (input == 0) { 
      
        cout << "Fibonacci(0) is: 0" << endl;
    } 
    else if (input == 1) { 
        
        cout << "Fibonacci(1) is: 1" << endl;
    } 
    else {
        
        int n = (int)input; 
        long long a = 0, b = 1, next;
        
        for (int i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << "Fibonacci(" << n << ") is: " << b << endl;
    }

    return 0;
}
