#include <algorithm>
#include <bitset>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef vector<vi> vvi;

#define sz(a) int((a).size())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(), _e = (c).end(); it != _e; ++it)
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define rep(i, n) for (int i = 0, _n = (n); i < _n; ++i)
#define repd(i, n) for (int i = (n)-1; i >= 0; --i)
#define fo(i, a, b) for (int i = (a), _b = (b); i <= _b; ++i)
#define fod(i, a, b) for (int i = (a), _b = (b); i >= _b; --i)

#define INF 1000000000
#define N 10005

int a[4][N], n, f[N][11];
int sts[] = {0, 1, 2, 4, 5, 8, 9, 10};

int main()
{
    // freopen( "input.txt", "r", stdin );
    // freopen( "output.txt", "w", stdout );
    scanf("%d", &n);
    rep(i, 4) fo(j, 1, n) scanf("%d", &a[i][j]);
    fo(j, 1, n)
    {
        rep(st, 8)
        {
            rep(i, 4) if (sts[st] & (1 << i)) f[j][sts[st]] += a[i][j];
            int mx = INT_MIN;
            rep(st2, 8) if ((sts[st] | sts[st2]) == (sts[st] ^ sts[st2]))
                mx = max(f[j - 1][sts[st2]], mx);
            f[j][sts[st]] += mx;
        }
    }
    int mx = INT_MIN;
    rep(st, 8) mx = max(f[n][sts[st]], mx);
    int mx2 = INT_MIN;
    rep(i, 4) fo(j, 1, n) mx2 = max(mx2, a[i][j]);
    printf("%d\n", mx2 < 0 ? mx2 : mx);
    return 0;
}
