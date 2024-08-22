#include <iostream>
using namespace std;

// Function to calculate minimum number of operations
int minOperations(int l, int r) {
    int operations = 0;
    while (r > 0) {
        if (r % 3 == 0) {
            r /= 3;
        } else {
            r -= 1;
        }
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        // Calculate the operations needed for r to become 0
        int result = minOperations(l, r);
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}
