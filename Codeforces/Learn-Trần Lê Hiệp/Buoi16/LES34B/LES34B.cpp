#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fn(i, a, b) for (int i = a; i >= b; i ==)
#define maxn 1000005
using namespace std;
ll a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES34B.inp", "r", stdin);
    freopen("LES34B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    cout << a * b / __gcd(a, b);
}