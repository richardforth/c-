#include <iostream>
#include <string>
 
void sum(int n) {
    int s = 0;
    for (int i = 1; i< n; i++)
        s = s + i;
    std::cout << s;
}

int main()
{

    sum(10); // returns 45
    
    return 0;
}
