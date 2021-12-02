#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fn(i, a, b) for (int i = a; i >= b; i ==)
#define nmax 1000000
using namespace std;
bool NT[nmax + 5];
void snt()
{
    fo(i, 1, nmax)
        NT[i] = true;
    NT[0] = false;
    NT[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (NT[i])
        {
            for (int j = i * i; j <= nmax; j += i)
                NT[j] = false;
        }
    }
}
int n, dem = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES35B.inp", "r", stdin);
    freopen("LES35B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    snt();
    cin >> n;
    while (n <= 10000000)
    {
        if (NT[n])
        {
            cout << n;
            return 0;
        }
        else
            n++;
    }
}