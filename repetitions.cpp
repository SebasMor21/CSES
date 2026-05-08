#include <iostream>
#include <string>

int main()
{
    std::string letters;
    char old_letter = 'S';
    long max = 0;
    long count = 1;

    std::cin>>letters;

    for (const char current_letter : letters)
    {
        if (current_letter == old_letter)
        {
           count += 1;
        }
        else
        {           
            count = 1;
        }
        
        if (count > max)
        {
            max = count;  
        }

        old_letter = current_letter;
    }
    
    std::cout<<max<<"\n";

    return 0;
}