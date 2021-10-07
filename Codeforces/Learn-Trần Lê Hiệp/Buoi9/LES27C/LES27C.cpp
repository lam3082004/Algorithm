#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES27C.inp", "r", stdin);
    freopen("LES27C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    if (n <= 99)
    {
        if (n < 10)
            cout << n;
        else
            cout << 9;
    }
    else if (n >= 100 && n <= 9999)
    {
        if (n >= 1000)
            cout << 909;
        else
            cout << n - 90;
    }
    else if (n >= 10000 && n <= 99999)
    {

        cout << n - 9090;
    }
    else
        cout << 90909;
}