#include <iostream>
#include <string>
#include <math.h>

void armstrong (int num) {

    // Change the num variable to string, 
    // and calculate the length (number of digits)
    int order = (std::to_string(num)).length();
 
    // initialize sum
    int sum = 0;
    
    // find the sum of the cube of each digit
    int temp = num;
    while (temp > 0){
        int digit = temp % 10;
        // debug
        std::cout << digit << " " ;
        
        double result = pow(digit, order); // changing int to double because 5**3 was returning 124 instead of 125 as a float
        sum += result;
        
        // debug
        std::cout << std::endl << digit << " raised to the power of  " << order << " is equal to " << result << std::endl;
        std::cout << "Subtotal: " << sum << std::endl;
        
        temp = temp / 10;
    }


    if (num == sum)
    {
        std::cout << std::endl << num << " is an Armstrong number." << std::endl;
    }
    else 
    {
        std::cout << std::endl << num << " is not an Armstrong number." << std::endl;
    }
}

int main()
{
    int number;
    
    number = 127;
    armstrong(number);
    std::cout << std::endl << "---" << std::endl;
    number = 153;
    armstrong(number);
    
    return 0;
}
