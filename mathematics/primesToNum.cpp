#include <iostream>
#include <string>
 
bool isPrime(int num) {
    bool is_primary;
    if (num > 1)
    {
        for (int i = 2; i<num; i++)       
            if ((num % i) == 0)
            {
                is_primary = false;
                break;
            }
            else 
            {
                is_primary = true ;
            }
    }
    else
    {
        is_primary = false; 
    }
    return is_primary;
}

inline void somethingWentWrong() { std::cout << "Only one integer argument please." << std::endl ;}

int main(int argc, char **argv)
{
    int num;
    if (argc == 2)
    {
        num  = std::stoi(argv[1]);
        for (int i = 2 ; i < num; i++ )
        {
            if (isPrime(i))
            {
                std::cout << std::to_string(i) << " " ;
            }
        }
        std::cout << std::endl;      
    }
    else
    {
        somethingWentWrong();
    }
    return 0;
}
