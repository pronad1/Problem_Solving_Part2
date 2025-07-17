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
    int n, k;
    cin >> n >> k;
    k--;

    vector<ll> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    ll mx = *max_element(h.begin(), h.end());
    if (h[k] == mx)
    {
        cout << "YES\n";
        return;
    }

    vector<bool> used(n, false);
    used[k] = true;
    ll time = 0;
    int current = k;
    bool found = false;
    int steps = 0;

    while (steps < n)
    {
        if (time > h[current] - 1)
        {
            break;
        }

        ll next_index = -1;
        ll next_height = -1;

        for (int j = 0; j < n; j++)
        {
            if (used[j])
                continue;
            if (h[j] > h[current])
            {
                if (h[j] <= 2 * h[current] - time)
                {
                    if (h[j] > next_height)
                    {
                        next_height = h[j];
                        next_index = j;
                    }
                }
            }
        }

        if (next_index == -1)
        {
            break;
        }

        used[next_index] = true;
        time = time + (next_height - h[current]);
        current = next_index;
        steps++;

        if (h[current] == mx)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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