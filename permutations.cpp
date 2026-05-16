#include <iostream>
#include <vector>

int main()
{
    long n;

    std::cin>>n;
    
    if (n == 1)
    {
        std::cout<<1;
    }
    else if (n < 4)
    {
        std::cout<<"NO SOLUTION\n";
    }
    
    else
    {
        std::vector<long> v1;
        
        for (long i = 1; i <= n; ++i)
        {
            if (i % 2 != 0)
            {
                v1.push_back(i);
            }
            else
            {
                std::cout<<i<<" ";
            }
        }

        for (long i = 0; i < v1.size(); i++)
        {
            std::cout<<v1[i]<<" ";
        }   
    }
    
    return 0;
}