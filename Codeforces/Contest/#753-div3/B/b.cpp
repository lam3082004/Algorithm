#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
using namespace std;
ll t;
ll a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll p = a;
        b--;
        if (a % 2 == 0)
        {
            a--;
            if ((b / 2 + b % 2) % 2 == 0)
                a -= (b / 2 + b % 2);
            else
                a -= ((b / 2 + b % 2) - 1), a += 2 * (b / 2 + b % 2);
            if ((b / 2) % 2 == 0)
                a -= (b / 2);
            else
                a -= ((b / 2) - 1), a += 2 * (b / 2) + 1;
        }
        else
        {
            a++;
            if ((b / 2 + b % 2) % 2 == 0)
                a += (b / 2 + b % 2);
            else
                a += ((b / 2 + b % 2) - 1), a -= 2 * (b / 2 + b % 2);
            if ((b / 2) % 2 == 0)
                a += (b / 2);
            else
                a += ((b / 2) - 1), a -= 2 * (b / 2) + 1;
        }
        if (b == 0)
            a = p;
        else if (b == 1 && a % 2 == 0)
            a--;
        else if (b == 1 && a % 2 == 1)
            a++;
        cout << a << '\n';
    }
}
