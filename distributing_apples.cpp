#include <iostream>

// Formula necesaria -> (n + m - 1)! / (m! * (n - 1)!)
// Restricciones
const int MOD = 1e9 + 7;
const int MAX = 2000005;

long long factorial[MAX];


// Potencia rapida
long long pow(long long base, long long exponet)
{
    long long result = 1;
    base %= MOD;

    while(exponet > 0)
    {
        if(exponet % 2 == 1)
        {
            result = (result * base) % MOD;
        }
        
        base = (base * base) % MOD;
        exponet = exponet / 2;
    }

    return result;  
}


// Calcula el inverso multiplicativo modular basado en el teorema de Fermat
long long mod_inverse(long long base)
{
    return pow(base, MOD - 2);
}


void pre_factorial()
{
    factorial[0] = 1;
    
    for (int i = 1; i < MAX; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    } 
}


int main()
{
    pre_factorial();

    long long n,m;
    
    std::cin>>n>>m;
    
    long long numerator = factorial[n + m - 1];
    long long first_denominator = mod_inverse(factorial[m]); //m!^-1
    long long second_denominator = mod_inverse(factorial[n - 1]); //(n - 1)!^-1
        
    long long result = (numerator * first_denominator) % MOD;
    result = (result * second_denominator) % MOD;

    std::cout<<result;
    std::cout<<std::endl;
     
    return 0;
}