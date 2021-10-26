
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES32C.inp", "r", stdin);
    freopen("LES32C.out", "w", stdout);
#endif // ONLINE_JUDGE
    ll n;
    cin >> n;
    string s, t1 = "", t2 = "";
    cin >> s;
    if (n % 2 == 0)
    {
        fo(i, 0, s.size() / 2 - 1)
            t1 += s[i];
        fo(i, s.size() / 2, s.size() - 1)
            t2 += s[i];
    }
    else
    {
        cout << "No";
        return 0;
    }
    if (t1 == t2)
        cout << "Yes";
    else
        cout << "No";
}