#if defined _WIN32
    #define PLATFORM "Windows"
#elif defined __linux
    #define PLATFORM "Linux"
#endif // defined
#include <iostream>
using namespace std;

int main ()
{
    if ( PLATFORM == "Windows" )
        cout << "Performing Windows Only Tasks..." << endl ;
    if ( PLATFORM == "Linux" )
        cout << "Performing Linux Only Tasks..." << endl ;
    return 0 ;
}
