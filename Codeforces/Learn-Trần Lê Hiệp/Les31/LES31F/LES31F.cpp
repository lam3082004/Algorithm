#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = (a); i <= (b); ++i)
#define __unique(V) (V).resize(unique((V).begin(), (V).end()) - (V).begin())
#define cntbit(X) __builtin_popcount((X))
#define bit(S, i) (((S) >> (i)) & 1)
#define PI acos(-1)
#define fi first
#define se second
#define LL long long
#define ii pair<int, int>
#define iii pair<int, ii>
#define eb emplace_back
#define TASK "59e"
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N = 11;
const int MOD = 1e9 + 7;
vector<int> adj[1 << N];
int dp[1 << N][1 << N];
int n, m;
///--------------------------
void add(int mask, int subMask)
{
    bool cnt = 0;
    int tmp = 0;
    for (int j = 0; j < n; ++j)
        if (bit(mask, j) == 0)
        {
            if (cnt)
                return;
            tmp ^= (1 << j);
        }
        else
        {
            if (bit(subMask, j) == 0)
            {
                if (cnt)
                    return;
            }
            else
            {
                cnt ^= 1;
            }
        }
    if (cnt)
        return;
    adj[mask].eb(subMask ^ tmp);
}
///--------------------------
void Plus(int &A, int B)
{
    A = (A + B) % MOD;
}
///--------------------------
int main()
{
    ///
    srand(time(NULL));
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef TLH2203
    freopen(TASK ".inp", "r", stdin);
    freopen(TASK ".out", "w", stdout);
#endif // TLH2203
    ///
    cin >> n >> m;

    for (int mask = 0; mask < (1 << n); ++mask)
    {
        for (int subMask = mask; subMask > 0; subMask = (subMask - 1) & mask)
        {
            add(mask, subMask);
        }
        add(mask, 0);
    }

    dp[0][(1 << n) - 1] = 1;
    for (int i = 0; i < m; ++i)
    {
        for (int mask = 0; mask < (1 << n); ++mask)
            for (auto new_mask : adj[mask])
            {
                Plus(dp[i + 1][new_mask], dp[i][mask]);
            }
    }
    cout << dp[m][(1 << n) - 1] << '\n';
}
