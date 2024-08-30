// Author  :  PROSENJIT MONDOL

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const ll maxn = 1000000;
const ll mod = 1000000007;

// Declare a vector with a new name to avoid conflicts
vector<ll> divisors(maxn + 1, 0); // Renamed "div" to "divisors"

// Function to compute the number of divisors or other properties
void solve(void) {
    // Precompute values up to maxn
    for (ll i = 2; i <= maxn; i++) {
        if (divisors[i] == 0) { // Found a prime number
            for (ll j = i; j <= maxn; j += i) {
                ll temp = j;
                ll cnt = 0;
                while (temp % i == 0) {
                    temp /= i;
                    cnt++;
                }
                if (divisors[j] == 0) {
                    divisors[j] = cnt + 1; // Start with the first divisor count
                } else {
                    divisors[j] *= (cnt + 1); // Multiply with existing divisor count
                }
            }
        }
    }
}

// Main function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve(); // Precompute before input handling

    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << divisors[n] % mod << '\n'; // Output precomputed value for n
    }
    return 0;
}
