#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n;
string s, t = "";
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30D.inp", "r", stdin);
    freopen("LES30D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    cin >> s;
    fo(i, 0, s.size() - 1)
    {
        if (s[i] != s[i + 1])
            t += s[i];
    }
    cout << t.size();
}