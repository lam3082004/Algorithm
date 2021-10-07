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
    freopen("WayTooLongWords.inp", "r", stdin);
    freopen("WayTooLongWords.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.size() <= 10)
            cout << s;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1];
        cout << '\n';
    }
}