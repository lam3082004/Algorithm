#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
vector<int> v;
int x, i, j;
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Vector-Erase.inp", "r", stdin);
    freopen("Vector-Erase.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int q1, q2, q3;
    cin >> q1;
    cin >> q2 >> q3;
    v.erase(v.begin() + (q1 - 1));
    v.erase(v.begin() + q2 - 1, v.begin() + q3 - 1);
    cout << v.size() << endl;
    for (j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << " ";
    }
}
