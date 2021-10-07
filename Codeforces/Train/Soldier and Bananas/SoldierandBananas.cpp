#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define nmax 1000005
#define nmax2 65000000
#define ii pair<int, int>
#define fi first
#define se second
#define oo 1e18
using namespace std;
const int mod = 1e9 + 7;
ll n, k, w;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n >> w;
    ll ans = w * (w + 1) / 2 * k;
    ans -= n;
    if (ans > 0)
        cout << ans;
    else
        cout << 0;
}