#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    c = c * 60 + d;
    d *= 12;
    double x = min(abs(c - d), 720 - abs(c - d));
    x /= 2;
    cout << fixed << setprecision(9);
    cout << sqrt((pow(a, 2) + pow(b, 2)) - 2 * a * b * cos(x / 180 * 3.1415926535)) << endl;
}