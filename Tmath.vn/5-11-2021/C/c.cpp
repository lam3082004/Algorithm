#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
string s;
vector<char> g;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif //    ONLINE_JUDGE
    cin >> s;
    fo(i, 0, s.size() - 1)
    {
        if (s[i] == 'S')
            g.push_back(s[i]);
        else
        {
            if (g.empty() == 0 && g.back() == 'S')
                g.pop_back();
            else
                g.push_back(s[i]);
        }
    }
    cout << g.size();
}
