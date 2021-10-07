#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll t, n, a[nmax], x, b[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("HemoseShopping.inp", "r", stdin);
    freopen("HemoseShopping.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        int check = true;
        cin >> n >> x;
        fo(i, 1, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a + 1, a + n + 1);
        if (n >= 2 * x)
            cout << "YES";
        else
        {
            fo(i, 1, n)
            {
                if (a[i] != b[i])
                {
                    if (i + x > n && i - x < 0)
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << '\n';
    }
}
