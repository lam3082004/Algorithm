#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a[55], b[55], n, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES26C.inp", "r", stdin);
    freopen("LES26C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a + 1, a + n + 1);
    fo(i, 1, n)
    {
        if (a[i] != b[i])
            dem++;
    }
    if (dem == 2 || dem == 0)
        cout << "YES";
    else
        cout << "NO";
}