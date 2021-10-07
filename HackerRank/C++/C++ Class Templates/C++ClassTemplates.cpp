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
string s, s1, s2;
long double a, b;
ll x, y;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("C++ClassTemplates.inp", "r", stdin);
    freopen("C++ClassTemplates.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "string")
        {
            string t = "";
            cin >> s1 >> s2;
            t += s1;
            t += s2;
            cout << t << '\n';
        }
        else if (s == "int")
        {
            cin >> x >> y;
            cout << x + y << '\n';
        }
        else if (s == "float")
        {
            cin >> a >> b;
            cout << a + b;
        }
    }
}
