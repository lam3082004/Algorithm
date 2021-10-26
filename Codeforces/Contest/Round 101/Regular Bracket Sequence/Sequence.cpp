#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
#define ii pair<ll, ll>
#define fi first
#define se second
#define oo 1e18
#define ar array
using namespace std;
const int mod = 998244353;
ll t;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Sequence.inp", "r", stdin);
    freopen("Sequence.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() % 2 == 0 && s[0] != ')' && s[s.size() - 1] != '(')
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}