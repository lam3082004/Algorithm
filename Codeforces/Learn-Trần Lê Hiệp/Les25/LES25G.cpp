#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int nmax = 1e6+5;
int n,val = 0,s = 0, k = 1, v = 0, F[nmax], d[nmax];
string x,y;
char a[25];
queue <int> g;

void bfs(int a)
{
    g.push(a);
    F[a] = 1;
    while (!g.empty())
    {
        int u = g.front();
        g.pop();
//        val ++;
//        if (val > 1048576)
//            {
//                //dem[x] = -1; dem[y] = -1;
//                return;
//            }
        for (int i = 0 ; i <= n-2 ; ++i)
        {
            int x = u, y = u;
            if (i <=  n-3)
            {
                //for (int j = i ; j <= i+2 ; ++j)
                x = x ^ (1 << i) ^ (1 << i+1) ^ (1 << i+2);
                if (F[x] == 0)
                {
                    F[x] = 1;
                    g.push(x);
                    d[x] = d[u] + 1;
                }
            }

            y = y ^ (1 << i) ^ (1 << i+1);
            if (F[y] == 0)
                {
                    F[y] = 1;
                    g.push(y);
                    d[y] = d[u] + 1;
                }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for (ll i = 1 ; i <= n ; ++i)
        cin>>a[i];
    for (ll i = n ; i >= 1 ; --i)
    {
        if (a[i] == 'B')
            s += k;
        v += k;
        k = k * 2;
    }
    //cout<<s;
    d[0] = -1;
    d[v] = -1;
    bfs(s);
    cout<<min(d[0], d[v]);


}
   