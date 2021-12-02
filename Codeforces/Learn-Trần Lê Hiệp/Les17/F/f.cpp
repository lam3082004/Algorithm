#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, q, l, r, k, pos;
int a[100005], b[100005], c[100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("f.inp", "r", stdin);
    freopen("f.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> q;
    while (q--)
    {
        cin >> l >> r;
        b[l]++;
        b[r + 1]--;
        c[r + 1] -= r - l + 1;
    }
    fo(i, 1, n)
    {
        b[i] += b[i - 1];
        pos += b[i] + c[i];
        a[i] += pos;
        cout << a[i] << " ";
    }
}
