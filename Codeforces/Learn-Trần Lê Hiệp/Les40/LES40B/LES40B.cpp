#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 100005
using namespace std;
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = tam * tam;
    if (b % 2 == 1)
        tam = tam * a;
    return tam;
}
ll n;
string s = "";
int main()
{
#ifndef ONLINE_JUDGE
    freopen("LES40B.inp", "r", stdin);
    freopen("LES40B.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n > 0)
    {
        if (n % 26 == 0)
            n--,
                s += 'z';
        else
            s += char(n % 26 + 'a' - 1);
        n /= 26;
    }
    reverse(s.begin(), s.end());
    cout << s;
}