#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
string s;
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES39A.inp", "r", stdin);
    freopen("LES39A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    cin >> s;
    int t = s.size();
    if (n >= t)
        cout << s;
    else
    {
        fo(i, 0, n - 1)
                cout
            << s[i];
        cout << "...";
    }
}
