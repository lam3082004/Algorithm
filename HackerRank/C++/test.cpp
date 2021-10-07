#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll t = 0;
        cin >> s;
        if (s.size() < 5)
            cout << "Too short: " << s.size();
        else
        {
            fo(i, 0, s.size() - 1)
            {
                if (s[i] == 'w' && s[i + 1] == 'w')
                    t = 1;
            }
            if (t == 1)
                cout << "Invalid";
            else
                cout << "Valid";
        }
        cout << '\n';
    }
}
