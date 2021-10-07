#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
int n, t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Watermelon.inp", "r", stdin);
    freopen("Watermelon.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    if (n % 2 == 0 && n >= 1 && n <= 100 && n != 2)
        cout << "YES";
    else
        cout << "NO";
}