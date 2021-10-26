#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
const int base = 1e9 + 7;
ll q;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Subsequences.inp", "r", stdin);
    freopen("Subsequences.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> q;
    while (q--)
    {
        int minn = 200, k;
        cin >> s;
        fo(i, 0, s.size() - 1)
            minn = min(minn, s[i] - 'a' + 1);
        fo(i, 0, s.size() - 1)
        {
            if (minn == s[i] - 'a' + 1)
            {
                k = i;
                break;
            }
        }
        cout << s[k] << ' ';
        fo(i, 0, s.size() - 1)
        {
            if (i != k)
                cout << s[i];
        }
        cout << '\n';
    }
}
