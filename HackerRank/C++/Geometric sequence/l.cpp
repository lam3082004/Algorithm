#include <iostream>
#include <iomanip>
#include <cmath>

double s(double r)
{
    double result = 0;
    double x = 1; // r^0 is always 0
    for (int k = 1; k <= 5000; k++)
    {
#ifdef SLOW
        result += (900 - 3 * k) * pow(r, k - 1);
#else
        result += (900 - 3 * k) * x;
        x *= r;
#endif
    }
    return result;
}

int main()
{
    double lower = 0;
    double upper = 2;

    while (upper - lower > 0.0000000000001)
    {
        double mid = (upper + lower) / 2;
        double current = s(mid);

        if (current < -600000000000.0)
            upper = mid;
        else
            lower = mid;
    }

    std::cout << std::fixed << std::setprecision(12) << (upper + lower) / 2 << std::endl;
    return 0;
}
