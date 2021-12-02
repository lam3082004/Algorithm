#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 10000005
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define bit(x, i) ((x >> i) & 1)
#define cntone(x) (__builtin_popcount(x))
const ll mod = 1e9 + 7;
const ll base = 31;
void fre()
{
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
}
clock_t start = clock();
double timecomplexity;
int n, m, l, r, res = 0;
int s[nmax];
bool sol(string n, int l)
{
    if (l < 3)
    {
        if (stoi(n) % 8 == 0)
            return true;
        reverse(n.begin(), n.end());
        if (stoi(n) % 8 == 0)
            return true;
        return false;
    }
    int hash[10] = {0};
    for (int i = 0; i < l; i++)
        hash[n[i] - '0']++;
    for (int i = 104; i < 1000; i += 8)
    {
        int tmp = i;
        int a[10] = {0};
        a[tmp % 10]++;
        tmp /= 10;
        a[tmp % 10]++;
        tmp /= 10;
        a[tmp % 10]++;
        tmp = i;
        if (a[tmp % 10] > hash[tmp % 10])
            continue;
        tmp /= 10;
        if (a[tmp % 10] > hash[tmp % 10])
            continue;
        tmp /= 10;
        if (a[tmp % 10] > hash[tmp % 10])
            continue;
        return true;
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    int k = s.length();
    if (sol(s, k))
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    // fre();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }
    // cout<<'\n';
    // timecomplexity = (std::clock()-start)/(double)CLOCKS_PER_SEC;
    // cout<<timecomplexity;
    // you should actually read the stuff at the bottom
}