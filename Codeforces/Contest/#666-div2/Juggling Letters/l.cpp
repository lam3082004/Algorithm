#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
string s;
ll t, n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        string t = "";
        ll k = 1, f[300];
        memset(f, 0, sizeof(f));
        cin >> n;
        fo(i, 1, n)
        {
            cin >> s;
            fo(j, 0, s.size() - 1)
                f[s[j] - 'a' + 1]++;
        }
        fo(i, 1, 26)
        {
            if (f[i] % n != 0)
                k = 0;
        }
        if (k == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << '\n';
    }
}
