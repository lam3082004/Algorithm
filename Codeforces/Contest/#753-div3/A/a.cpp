#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
using namespace std;
ll t;
string a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        ll dem = 0, k;
        cin >> a;
        cin >> b;
        int i = 1;
        fo(i, 0, a.size() - 1)
        {
            if (a[i] == b[0])
            {
                k = i;
                break;
            }
        }
        while (i <= b.size() - 1)
        {
            fo(j, 0, a.size() - 1)
            {
                if (b[i] == a[j])
                    dem += abs(k - j),
                        k = j,
                        i++;
            }
        }
        cout << dem << '\n';
    }
}
