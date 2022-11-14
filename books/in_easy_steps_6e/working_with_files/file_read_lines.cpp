#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string line ;
    int i ;
    ifstream reader( "poem.txt" ) ;

    if ( ! reader )
    {
        cout << "Error, unable to open file for reading." ;
        return -1 ;
    }
    else
    {
        for ( i = 0; ! reader.eof(); i++)
        {
            getline( reader, line ) ;
            cout << line << endl ;

        }
        reader.close() ;
        cout << endl << "Number of iterations: " << i << endl ;
    }

    return 0;
}
