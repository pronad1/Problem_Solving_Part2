#include <bits/stdc++.h>
using namespace std;

long long mod = 613123835 + 385120518;

long long modpow(long long a, long long e)
{
    long long r = 1;
    while (e)
    {
        if (e & 1)
            r = r * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    const int N = 200000;
    static long long fact[N + 5], invfact[N + 5];

    fact[0] = 1;
    for (int i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % mod;
    invfact[N] = modpow(fact[N], mod - 2);
    for (int i = N; i > 0; i--)
        invfact[i - 1] = invfact[i] * i % mod;

    auto C = [&](int n, int r)
    {
        if (r < 0 || r > n)
            return 0LL;
        return fact[n] * invfact[r] % mod * invfact[n - r] % mod;
    };

    while (T--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ones = 0;
        for (char c : s)
            if (c == '1')
                ones++;

        if (n < 3 || ones < 2)
        {
            cout << 0 << "\n";
            continue;
        }

        long long ans = C(n, 3) * C(n - 2, ones - 2) % mod;
        cout << ans << "\n";
    }
    return 0;
}
