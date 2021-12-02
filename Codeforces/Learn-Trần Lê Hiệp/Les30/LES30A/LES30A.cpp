#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s[5], a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES30A.inp", "r", stdin);
    freopen("LES30A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a;
    s[1] = "Sunny";
    s[2] = "Cloudy";
    s[3] = "Rainy";
    if (s[1] == a)
        cout << s[2];
    else if (s[2] == a)
        cout << s[3];
    else
        cout << s[1];
}