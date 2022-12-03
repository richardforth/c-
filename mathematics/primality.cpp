#include <iostream>
#include <string>
 
void prime(int num) {
    std::string is_primary = "";
        if (num > 1) {
            for (int i = 2; i<num; i++)       
                if ((num % i) == 0){
                    is_primary = std::to_string(num) + " is not a prime number.";
                    break;}
                 else {
                    is_primary = std::to_string(num) + " is a prime number.";}}
        else {
            is_primary = std::to_string(num) + " is not a prime number."; }
        std::cout << is_primary;
}

int main()
{
    prime(10);

    return 0;
}
