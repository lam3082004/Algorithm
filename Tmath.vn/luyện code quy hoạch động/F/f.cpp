#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define fod(i, a, b) for (int i = a; i >= b; --i)
#define ii pair<ll, ll>
#define iii pair<ii, int>
#define fi first
#define se second
#define oo 1e18
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e6 + 5;
int k, a[15];
vector<ll> p;
void bk(int x)
{
    fo(i, -1, 1)
    {
        a[x] = i;
        if (x == 9)
        {
            fo(s, 1, 9)
            {
                int res = s;
                ll tmp = s;
                fo(j, 1, 9)
                {
                    if (res + a[j] < 0 || res + a[j] > 9)
                        break;
                    res += a[j];
                    tmp = tmp * 10 + res;
                    p.push_back(tmp);
                }
            }
        }
        else
            bk(x + 1);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("new.inp", "r", stdin);
    freopen("new.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k;
    bk(1);
    fo(i, 0, 9)
        p.push_back(i);
    sort(p.begin(), p.end());
    p.resize(unique(p.begin(), p.end()) - p.begin());
    cout << p[k];
}