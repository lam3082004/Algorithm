#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, k, R, S, P, a[nmax], kq = 0;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES35D.inp", "r", stdin);
    freopen("LES35D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    cin >> R >> S >> P;
    cin >> s;
    fo(i, 0, n - 1)
    {
        if (s[i] == 'r')
            a[i] = 1;
        else if (s[i] == 's')
            a[i] = 2;
        else if (s[i] == 'p')
            a[i] = 3;
    }
    // fo(i, 0, n - 1) cout << a[i] << ' ';
    fo(i, 0, s.size() - 1)
    {
        if (i >= k)
        {
            if (a[i] != a[i - k])
            {
                if (s[i] == 'r')
                    kq += P;
                else if (s[i] == 's')
                    kq += R;
                else if (s[i] == 'p')
                    kq += S;
            }
            else
                a[i] = 0;
        }
        else
        {
            if (s[i] == 'r')
                kq += P;
            else if (s[i] == 's')
                kq += R;
            else if (s[i] == 'p')
                kq += S;
        }
    }
    cout << kq;
}