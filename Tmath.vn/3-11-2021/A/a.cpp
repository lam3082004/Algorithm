#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
string s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> s;
    fo(i, 0, s.size() - 1)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == 'S')
                dem1 = 1;
            else if (s[i] == 'N')
                dem2 = 1;
            else if (s[i] == 'W')
                dem3 = 1;
            else if (s[i] == 'E')
                dem4 = 1;
        }
    }
    bool c1, c2;
    if (dem1 == dem2)
        c1 = true;
    else
        c2 = false;
    if (dem3 == dem4)
        c2 = true;
    else
        c2 = false;
    if (c2 == true && c1 == true)
        cout << "Yes";
    else
        cout << "No";
}
