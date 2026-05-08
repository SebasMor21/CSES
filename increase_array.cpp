#include <iostream>

int main()
{
    long n, integer, old_integer, moves; 
    
    old_integer = 0;
    moves = 0;

    std::cin>>n;

    for (long i = 0; i < n; ++i)
    {
        std::cin>>integer;

        if (old_integer > integer)
        {
            moves += old_integer - integer;
            integer = old_integer;
        }

        old_integer = integer;
    }
    
    std::cout<<moves<<"\n";

    return 0;
}