// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int X, Y, K;
    cin >> X >> Y >> K;
    int Ax, Ay, Bx, By;
    int Cx, Cy, Dx, Dy;
    if (K <= X)
    {
        Ax = 0;
        Ay = 0;
        Bx = K;
        By = 0;
    }
    else
    {
        // Adjust if K > X by setting Ax so Bx stays within bounds
        Ax = X - K;
        Ay = 0;
        Bx = X;
        By = 0;
    }
    if (K <= Y)
    {
        Cx = 0;
        Cy = 0;
        Dx = 0;
        Dy = K;
    }
    else
    {
        // Adjust if K > Y by setting Cy so Dy stays within bounds
        Cx = 0;
        Cy = Y - K;
        Dx = 0;
        Dy = Y;
    }
    cout << Ax << " " << Ay << " " << Bx << " " << By << "\n";
    cout << Cx << " " << Cy << " " << Dx << " " << Dy << "\n";
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