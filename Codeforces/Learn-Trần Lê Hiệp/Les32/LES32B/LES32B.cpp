#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define maxn 1000005
using namespace std;
ll n, dem = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES32B.inp", "r", stdin);
    freopen("LES32B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, 9)
        fo(j, 1, 9)
    {
        if (i * j == n)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}