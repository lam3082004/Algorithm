#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, t, z = 0, a[55];
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = tam * tam;
    if (b % 2 == 1)
        tam = tam * a;
    return tam;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, 50)
        a[++z] = mu(2, i);
    while (n--)
    {
        ll check = 0;
        cin >> t;
        fo(i, 1, z)
        {
            if (a[i] == t)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
            cout << "NO";
        else
            cout << "YES";
        cout << '\n';
    }
}
