#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (a == b)
    {
        cout << -1;
        return 0;
    }
    if (a > b)
    {
        cout << 0;
        return 0;
    }
    int i = 0;
    while (a < b)
    {
        fo(j, 0, a.size() - 2)
            a[j] = a[j + 1];
        a[a.size() - 1] = a[0];
        fo(j, 0, b.size() - 2)
            b[j] = b[j + 1];
        b[b.size() - 1] = b[0];
        if (i > 1000)
        {
            cout << -1;
            return 0;
        }
        i++;
    }
    cout << i;
}