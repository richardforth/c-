#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string info = "\n\tThe Ballad of Reading Gaol" ;
    info.append( "\n\t\t\tOscar Wilde 1898" ) ;


    ofstream writer("poem.txt", ios::app ) ;
    if ( ! writer ) {
        cout << "Error openning file for output" << endl ;
        return -1 ;
    }
    writer << info << endl ;
    writer.close() ;

    return 0;
}
