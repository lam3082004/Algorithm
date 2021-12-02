
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s, t1 = "", t2 = "", k;
int t, f, dem = 0, q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES36C.inp", "r", stdin);
    freopen("LES36C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
            swap(t1, t2),
                dem++;
        else
        {
            cin >> f;
            cin >> k;
            if (f == 1)
                t1 += k;
            else
                t2 += k;
        }
    }
    reverse(t1.begin(), t1.end());
    if (dem % 2 == 1)
        reverse(s.begin(), s.end());
    s = t1 + s + t2;
    cout << s;
}