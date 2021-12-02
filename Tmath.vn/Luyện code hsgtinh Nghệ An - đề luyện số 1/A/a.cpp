#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 3000005
using namespace std;
ll n, a, s = 0;
bool nt(ll n)
{
    if (n < 2)
        return false;
    fo(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool NT[nmax];
void SNT()
{
    fo(i, 1, nmax) NT[i] = true;
    NT[1] = false;
    NT[0] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (NT[i] == true)
        {
            for (int j = i * i; j <= nmax; j += i)
                NT[j] = false;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
#endif // ONLINE_JUDGE
    cout << 1;
    //  cout<<s;
}
