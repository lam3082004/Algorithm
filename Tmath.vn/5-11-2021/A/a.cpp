#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
ll a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> a >> b;
    if (a * b <= 0)
        cout << "Zero";
    else if (a > 0)
        cout << "Positive";
    else
    {
        if ((b - a + 1) % 2 == 0)
            cout << "Positive";
        else
            cout << "Negative";
    }
}
