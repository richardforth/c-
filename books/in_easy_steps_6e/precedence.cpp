#include <iostream>
using namespace std;

int main()
{

    int num = 1 + 4 * 3 ;
    cout << endl << "Default order: " << num << endl ;

    num = ( 1 + 4 ) * 3 ;
    cout << endl << "Forced order: " << num << endl ;

    num = 7 - 4 + 2 ;
    cout << endl << "Default direction: " << num << endl ;

    num = 7 - ( 4 + 2 ) ;
    cout << endl << "Forced direction: " << num << endl ;

    return 0;
}
