#include <iostream>
using namespace std;

int main()
{
    string lang = "C++" ;
    int num = 1000000000 ;
    try
    {
        lang.resize( 3 * num ) ;
    }
    catch ( out_of_range &e )
    {
        cerr << "Range Exception: " << e.what() << endl ;
        cerr << "Exception Type: " << typeid( e ).name() << endl ;
        cerr << "Program terminated." << endl ;
        return -1 ;
    }
    catch ( exception &e )
    {
        cerr << "Range Exception: " << e.what() << endl ;
        cerr << "Exception Type: " << typeid( e ).name() << endl ;
    }

    cout << "Program continues..." << endl ;
    return 0 ;
}
