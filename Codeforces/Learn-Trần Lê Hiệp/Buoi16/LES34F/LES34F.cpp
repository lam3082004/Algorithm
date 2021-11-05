#include <bits/stdc++.h>
#define TASK "1167F"
#define LL long long
#define eb emplace_back
using namespace std;
const int mod = 1e9 + 7;
const int maxn = 5e5 + 5;
int n, a[maxn], BIT[maxn + 5], b[maxn];
vector<int> RR;
///-------------------------
void update(int i, int val)
{
    if (i > maxn)
        return;
    BIT[i] = (BIT[i] + val) % mod;
    update(i + (-i & i), val);
}
///-------------------------
int get(int i)
{
    if (i <= 0)
        return 0;
    int tmp = (BIT[i] + get(i - (-i & i))) % mod;
    return tmp;
}
///-------------------------
int tiny(int k)
{
    return upper_bound(RR.begin(), RR.end(), k) - RR.begin();
}
///-------------------------
void solve()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    int ans = 0, pro = 0;
    for (int i = 1; i <= n; ++i)
        ans = (ans + 1LL * (1LL * a[i] * i % mod) * (n - i + 1)) % mod;
    for (int i = 1; i <= n; ++i)
        RR.eb(a[i]);
    sort(RR.begin(), RR.end());
    for (int i = 1; i <= n; ++i)
        b[i] = tiny(a[i]) + 1;
    for (int i = 1; i <= n; ++i)
    {
        pro = (pro + 1LL * (1LL * a[i] * (n - i + 1) % mod) * get(b[i] - 1)) % mod;
        update(b[i], i);
    }
    memset(BIT, 0, sizeof(BIT));
    for (int i = n; i > 0; --i)
    {
        pro = (pro + 1LL * (1LL * a[i] * i % mod) * get(b[i] - 1)) % mod;
        update(b[i], n - i + 1);
    }
    ans = (ans + pro) % mod;
    printf("%d\n", ans);
}
///-------------------------
int main()
{
#ifdef TLH2203
    freopen(TASK ".inp", "r", stdin);
    freopen(TASK ".out", "w", stdout);
#endif // TLH2203
    solve();
}
