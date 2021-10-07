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
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("PrintPretty.inp", "r", stdin);
    freopen("PrintPretty.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (n--)
    {
        long double a, b, c;
        cin >> a >> b >> c;
        cout << std::hex << std::left << std::showbase << std::nouppercase;
        cout << (long long)a << endl;
        cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);
        cout << b << endl;
        cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);
        cout << c << endl;
    }
}
