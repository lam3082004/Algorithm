#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int t, n, x, u, v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        vector<int> p[1005];
        cin >> n >> x;
        if (n == 1)
        {
            cout << "Ayush" << '\n';
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            p[u].push_back(v);
            p[v].push_back(u);
        }
        // cout << p[v][0];
        if (p[x].size() == 1)
            cout << "Ayush" << '\n';
        else
        {
            if (n % 2 == 1)
                cout << "Ashish" << '\n';
            else
                cout << "Ayush" << '\n';
        }
    }
}