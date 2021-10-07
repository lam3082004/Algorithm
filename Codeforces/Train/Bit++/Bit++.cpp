#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define nmax 1000005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
const int mod = 1e9 + 7;
ll n, m, x = 0;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Bit++.inp", "r", stdin);
    freopen("Bit++.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n)
    {
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}