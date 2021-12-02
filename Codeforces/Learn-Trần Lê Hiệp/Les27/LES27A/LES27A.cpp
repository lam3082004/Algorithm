#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES27A.inp", "r", stdin);
    freopen("LES27A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b >> c;
    if (b + c <= a)
        cout << 0;
    else
        cout << b + c - a;
}