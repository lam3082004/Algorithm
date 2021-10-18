#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, m, a[nmax];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> m >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);
        int kq = 0;
        for (int sum = 0, i = n; i > 0; --i)
        {
            if (a[i] > sum)
            {
                sum += m - a[i];
                kq++;
            }
        }
        cout << kq << '\n';
    }
}
