#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33A.inp", "r", stdin);
    freopen("LES33A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    cin >> s;
    n %= 26;
    fo(i, 0, s.size() - 1)
    {
        if (s[i] - 'A' + 1 + n <= 26)
            s[i] = s[i] + n;
        else
            s[i] = s[i] - (26 - n);
        // cout << s[i] - 'A' + 1 << ' ';
    }
    fo(i, 0, s.size() - 1) cout << s[i];
}