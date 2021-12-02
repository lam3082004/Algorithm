#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, k, c, t1[nmax], t2[nmax], dem1 = 0, dem2 = 0;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES37E.inp", "r", stdin);
    freopen("LES37E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k >> c;
    cin >> s;
    s = ' ' + s;
    fo(i, 1, n)
    {
        if (s[i] == 'o')
        {
            t1[i] = true;
            dem1++;
            i += c;
        }
    }
    for (int j = n; j >= 1; j--)
    {
        if (s[j] == 'o')
        {
            t2[j] = true;
            dem2++;
            j -= c;
        }
    }
    if (dem1 >= k && dem2 >= k)
    {
        fo(i, 1, n)
        {
            if (t1[i] == true && t2[i] == true)
                cout << i << '\n';
        }
    }
}