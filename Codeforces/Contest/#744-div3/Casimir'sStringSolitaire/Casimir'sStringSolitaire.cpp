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
int n, t, a[1005][1005], dem2 = 0, dem1 = 0, dem3 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Casimir'sStringSolitaire.inp", "r", stdin);
    freopen("Casimir'sStringSolitaire.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        dem1 = 0, dem2 = 0, dem3 = 0;
        cin >> s;
        fo(i, 0, s.size() - 1)
        {
            if (s[i] == 'A')
                dem1++;
            else if (s[i] == 'B')
                dem2++;
            else if (s[i] == 'C')
                dem3++;
        }
        if (dem2 - dem1 == dem3)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}