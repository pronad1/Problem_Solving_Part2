// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int gc(int a, int b)
{
    return b == 0 ? a : gc(b, a % b);
}
void solve(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    double dSquared = (4 * area * area) / (a * a + b * b + c * c);


    int numerator =round(dSquared * 1000000);
    int denominator = 1000000;

    int divisor = gc(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    cout << numerator << "/" << denominator << '\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}