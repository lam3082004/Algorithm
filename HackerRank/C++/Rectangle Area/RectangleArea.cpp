#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("RectangleArea.inp", "r", stdin);
    freopen("RectangleArea.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    cout << a << ' ' << b << endl;
    cout << a * b;
}
