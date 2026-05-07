#include <iostream>

int main()
{
    long n, wrong_sum, right_sum, number;

    wrong_sum = 0;
    right_sum = 0;

    std::cin>>n;

    for (long i = 0; i <= n; ++i)
    {
        if (i < n-1)
        {
            std::cin>>number; //Lee los numeros separados por comas o saltos de linea
            wrong_sum += number;
        }
        
        right_sum += i;
    }

    std::cout<<right_sum - wrong_sum<<"\n";

    return 0;
}