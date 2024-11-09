#include <iostream>
#include <vector>
#include <cmath>
#include <numeric> // For std::gcd

using namespace std;

// Function to calculate gcd for fraction simplification
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to solve each test case
void solveTestCase(int caseNum, int a, int b, int c) {
    // Semi-perimeter (we multiply to keep it integer)
    long long s = (a + b + c) / 2;

    // Calculate area^2 using Heron's formula squared to avoid square roots
    long long areaSquared = s * (s - a) * (s - b) * (s - c);

    // Calculate d^2 as a fraction (4 * area^2) / (a^2 + b^2 + c^2)
    long long perimeterSquaredSum = a * a + b * b + c * c;
    long long numerator = 4 * areaSquared;
    long long denominator = perimeterSquaredSum;

    // Simplify the fraction by dividing by the GCD
    long long commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Output the result in the required format
    cout << "Case " << caseNum << ": " << numerator << "/" << denominator << endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int a, b, c;
        cin >> a >> b >> c;

        solveTestCase(t, a, b, c);
    }

    return 0;
}
