#if defined _WIN32
    #define PLATFORM "Windows"
#elif defined __linux
    #define PLATFORM "Linux"
#endif // defined
#include <iostream>
using namespace std;


/*

TODO LIST:

1. add all the functions from the last two programs here
2. Using the macros above determine the OS and present the correct options / call the correct functions.


*/


int main ()
{
    if ( PLATFORM == "Windows" )
        cout << "Performing Windows Only Tasks..." << endl ;
    if ( PLATFORM == "Linux" )
        cout << "Performing Linux Only Tasks..." << endl ;
    return 0 ;
}
