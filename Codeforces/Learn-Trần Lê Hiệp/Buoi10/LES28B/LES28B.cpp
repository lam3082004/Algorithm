#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES28B.inp", "r", stdin);
    freopen("LES28B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    if (b == 1)
        cout << 0;
    else
    {
        if (a >= b)
            cout << 1;
        else
        {
            if ((b - a) % (a - 1) == 0)
                cout << (b - a) / (a - 1) + 1;
            else
            {
                if (b % (a - 1) == 0)
                    cout << b / (a - 1);
                else
                    cout << b / (a - 1) + 1;
            }
        }
    }
}