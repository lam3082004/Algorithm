#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
map<string, ll> m;
ll n = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Maps-STL.inp", "r", stdin);
    freopen("Maps-STL.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    while (n--)
    {
        int q = 0;
        cin >> q;
        string x;
        if (q == 1)
        {
            int y = 0;
            cin >> x;
            cin >> y;
            m[x] += y;
        }
        else if (q == 2)
        {
            cin >> x;
            m.erase(x);
        }
        else
        {
            cin >> x;
            if (m.find(x) != m.end())
                cout << m[x] << endl;
            else
                cout << 0 << endl;
        }
    }
}
