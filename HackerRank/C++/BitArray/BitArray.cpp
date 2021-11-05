#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 10000005
using namespace std;
const ll mod = 2147483648;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("BitArray.inp", "r", stdin);
    freopen("BitArray.out", "w", stdout);
#endif // ONLINE_JUDGE
    uint_fast64_t po = (uint_fast64_t)(pow(2, 31));
    uint_fast64_t N, S, P, Q;
    cin >> N >> S >> P >> Q;

    bool r = false;
    uint_fast64_t c = 0;
    uint_fast64_t prv = S % po;
    uint_fast64_t crn = -1;
    uint_fast64_t i = 1;

    do
    {
        crn = (prv * P + Q) % po;
        if (crn != prv)
        {
            prv = crn;
            ++c;
        }
        else
        {
            r = true;
        }
        ++i;
    } while (i < N && !r);
    cout << c + 1 << endl;
}
