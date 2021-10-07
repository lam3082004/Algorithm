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
int n, t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("1573A.inp", "r", stdin);
    freopen("1573A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        int dem = 0, p = 0;
        cin >> n;
        cin >> s;
        if (s.size() == 1)
        {
            cout << s[0] - '0' << '\n';
        }
        else
        {
            fo(i, 0, s.size() - 1)
            {
                p += s[i] - '0';
            }
            fo(i, 0, s.size() - 2)
            {
                if ((s[i] - '0') > 0)
                    dem++;
            }
            cout << dem + p << '\n';
        }
    }
}