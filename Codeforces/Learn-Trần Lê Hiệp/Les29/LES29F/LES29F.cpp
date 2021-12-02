#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, dem = 0, maxx = 0;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES29F.inp", "r", stdin);
    freopen("LES29F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> s;
    fo(i, 0, s.size() - 1)
    {
        dem = 0;
        fo(j, 0, s.size() - i - 1)
        {
            if (s[j] == s[i + j])
            {
                dem++;
                if (dem <= i)
                    maxx = max(maxx, dem);
            }
            else
                dem = 0;
        }
    }
    cout << maxx;
}