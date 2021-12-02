#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
bool nt(ll x)
{
    if  ( x  < 2)
        return false;
    fo(i,  2 , sqrt(x))
    {
        if  ( x   %  i == 0)
            return false;
    }
    return true;
}
ll n, dem = 0,   t  = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        //#ifndef ONLINE_JUDGE
        //    freopen("l.inp", "r", stdin);
        //    freopen("l.out", "w", stdout);
        //#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 3, int(sqrt(n)))
    {
        if  (nt(i) && nt( i   *  i + 4))
        {
            cout << 2 << ' ' << i << ' ' << i * i + 4 << '\n';
        }
    }
}