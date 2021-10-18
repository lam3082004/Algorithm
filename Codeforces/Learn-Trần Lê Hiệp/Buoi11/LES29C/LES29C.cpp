
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES29C.inp", "r", stdin);
    freopen("LES29C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    int i = 0;
    while (i <= s.size() - 1)
    {
        if (i % 2 == 0)
        {
            if (s[i] == 'R' || s[i] == 'U' || s[i] == 'D')
                i++;
            else
                break;
        }
        else
        {
            if (s[i] == 'L' || s[i] == 'U' || s[i] == 'D')
                i++;
            else
                break;
        }
    }
    if (i == s.size())
        cout << "Yes";
    else
        cout << "No";
}