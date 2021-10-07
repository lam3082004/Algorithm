#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("PreprocessorSolution.inp", "r", stdin);
    freopen("PreprocessorSolution.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    fo(i, 1, t) cin >> a[i];
    sort(a + 1, a + t + 1);
    cout << "Result = " << a[t] - a[1];
}
