#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// Helper function to square a number
double square(double x) {
    return x * x;
}

// Custom gcd function for compatibility with C++11 or older
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the square of the minimum jump distance
// This uses a formula-based approximation based on Fermat's point concepts
pair<long long, long long> fermat_distance_squared(int a, int b, int c) {
    // Calculate the area of the triangle using Heron's formula
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calculate the Fermat point distance (approximate) using area and perimeter
    double distance = (2 * sqrt(3) * area) / (a + b + c);

    // Square the distance
    double squaredDistance = square(distance);

    // Convert squared distance to fraction form with large enough precision
    long long numerator = static_cast<long long>(round(squaredDistance * 1e6));
    long long denominator = 1e6;

    // Reduce the fraction to irreducible form
    long long gcd_val = gcd(numerator, denominator);
    numerator /= gcd_val;
    denominator /= gcd_val;

    return make_pair(numerator, denominator);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Get the squared minimum jump distance as an irreducible fraction
        pair<long long, long long> result = fermat_distance_squared(a, b, c);
        long long numerator = result.first;
        long long denominator = result.second;

        // Output the result
        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}
