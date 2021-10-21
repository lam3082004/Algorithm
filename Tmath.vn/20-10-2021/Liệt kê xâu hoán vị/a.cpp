#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ii pair<int, int>
#define fi first
#define se second
#define bit(x, i) (((x) >> (i)) & 1)
using namespace std;
const int mod = 1e9 + 7;
const int nmax = 1e3 + 5;
string s, kq = "";
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    sort(s.begin(), s.end());
    do
    {
        kq += s;
        kq += '\n';
    } while (next_permutation(s.begin(), s.end()));
    cout << kq;
}