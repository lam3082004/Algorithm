#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll x = 0, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    ll x = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[s.size() - 1] == '+')
            x++;
        if (s[s.size() - 1] == '-' || s[0] == '-')
            x--;
    }
    cout << x << '\n';
}