
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES33C.inp", "r", stdin);
    freopen("LES33C.out", "w", stdout);
#endif // ONLINE_JUDGE
    // a[1] = true;
    cin >> n;
    a[0] = true;
    a[1] = false;
    fo(i, 0, n)
    {
        fo(j, 100, 105)
        {
            if (a[i] == true)
            {
                a[j + i] = true;
            }
        }
    }
    cout << a[n];
}