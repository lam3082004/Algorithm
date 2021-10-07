#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
int n, t, a[1005][1005], dem = 0, dem1 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Team.inp", "r", stdin);
    freopen("Team.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
            fo(j, 1, 3) cin >>
        a[i][j];
    int i = 1;
    while (i <= n)
    {
        if (a[i][1] == 1 && a[i][2] == 1 || a[i][3] == 1 && a[i][2] == 1 || a[i][3] == 1 && a[i][1] == 1 || a[i][3] == 1 && a[i][2] == 1 && a[i][1] == 1)
            dem++;
        i++;
    }
    cout << dem;
}