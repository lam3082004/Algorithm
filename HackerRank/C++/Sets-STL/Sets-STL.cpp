#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
set<ll> s;
ll n, i;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Sets-STL.inp", "r", stdin);
    freopen("Sets-STL.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    while (n--)
    {
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if (q == 1)
        {
            s.insert(x);
        }
        else if (q == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.find(x) == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}
