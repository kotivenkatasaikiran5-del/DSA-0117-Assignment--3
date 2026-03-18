
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double size_input;
    cout << "Enter size of the array: ";
    
    
    if (!(cin >> size_input)) {
        cout << "Invalid Size Input" << endl;
        return 0;
    }

    int n = (int)size_input;

    
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        
        if (!(cin >> arr[i])) {
            n = i; 
            break;
        }
    }

    
    int maxCount = 0;
    int mostFrequent = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    cout << "Most occurred number: " << mostFrequent << endl;

    return 0;
}
