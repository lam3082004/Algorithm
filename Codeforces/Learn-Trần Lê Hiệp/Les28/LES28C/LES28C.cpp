
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, t;
bool can(int x)
{
    if (int(sqrt(x)) * int(sqrt(x)) == x)
        return true;
    else
        return false;
}
ll chuso(ll x)
{
    int dem = 0;
    while (x > 0)
    {
        dem++;
        x /= 10;
    }
    return dem;
}
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
    freopen("LES28C.inp", "r", stdin);
    freopen("LES28C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (can(a * mu(10, chuso(b)) + b))
        cout << "Yes";
    else
        cout << "No";
}