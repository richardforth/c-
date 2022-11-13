#include <stdexcept>
#include <typeinfo>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++" ;
    int num = 1000000000 ;
    try
    {
        lang.replace( 100, 1, "C") ;
    }
    catch ( out_of_range &e )
    {
        cerr << "Range Exception: " << e.what() << endl ;
        cerr << "Exception Type: " << typeid( e ).name() << endl ;
        cerr << "Program terminated." << endl ;
        return -1 ;
    }

    cout << "Program continues..." << endl ;
    return 0 ;
}
