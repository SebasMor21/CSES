#include <iostream>

int main()
{
    long long n;

    std::cin>>n;
    
    for (long long k = 1; k <= n; ++k)
    {
        long long squares = k * k;
        long long total_ways = (squares * (squares - 1)) / 2;
        long long right_ways = 4 * (k - 1) * (k - 2);
        long long result = total_ways - right_ways;

        std::cout<<result;
        std::cout<<"\n";
    }
    
    return 0;   
}