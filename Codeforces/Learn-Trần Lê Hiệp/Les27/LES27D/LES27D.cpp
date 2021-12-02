#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], check = true;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES27D.inp", "r", stdin);
    freopen("LES27D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n - 1)
    {
        if (a[i] < a[i + 1])
            a[i + 1] = a[i + 1] - 1;
        else if (a[i] == a[i + 1])
            a[i + 1] = a[i + 1];
        else
        {
            cout << "No";
            return 0;
        }
    }
    // if (a[n - 1] - a[n] == 1)
    // {
    //     if (a[n - 2] == a[n - 1])
    //     {
    //         cout << "No";
    //         return 0;
    //     }
    // }
    // // cout << a[n - 2];
    cout << "Yes";
}