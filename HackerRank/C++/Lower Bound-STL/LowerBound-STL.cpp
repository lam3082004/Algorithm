#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int query;
    int queryLength;
    {

        std::vector<int>::iterator low;
        std::vector<int>::iterator foundValue;
        std::cin >> N;

        std::vector<int> v(N);
        //populate the vector
        for (int i = 0; i < N; i++)
        {
            std::cin >> v[i];
        }

        std::cin >> queryLength;

        for (int j = 0; j < queryLength; j++)
        {
            std::cin >> query;
            foundValue = find(v.begin(), v.end(), query);
            if (foundValue != v.end())
            {
                std::cout << "Yes " << (foundValue - v.begin() + 1) << std::endl;
            }
            else
            {
                low = std::lower_bound(v.begin(), v.end(), query);
                std::cout << "No " << find(v.begin(), v.end(), *low) - v.begin() + 1 << std::endl;
            }
        }
    }
    return 0;
}