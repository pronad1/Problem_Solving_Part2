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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] == -1 && arr[n - 1] == -1)
    {
        arr[0] = 0;
        arr[n - 1] = 0;
    }
    else if (arr[0] == -1)
    {
        arr[0] = arr[n - 1];
    }
    else if (arr[n - 1] == -1)
    {
        arr[n - 1] = arr[0];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = 0;
        }
    }

    cout << abs(arr[n - 1] - arr[0]) << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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