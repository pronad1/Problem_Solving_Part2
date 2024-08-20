#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> permutation(n);
            int left = 1;
            int right = n;
            for (int i = 0; i < n; i += 2) {
                permutation[i] = left++;
                permutation[i + 1] = right--;
            }
            
            for (int i = 0; i < n; ++i) {
                cout << permutation[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
