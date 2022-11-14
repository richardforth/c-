#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;

    cout << "AND logic gates: " ;
    cout << "(a && a) " << ( a && a ) << "(true)   " ;
    cout << "(a && b) " << ( a && b ) << "(false)   " ;
    cout << "(b && b) " << ( b && b ) << "(false)" << endl ;

    cout << "OR logic gates: " ;
    cout << "(a || a) " << ( a || a ) << "(true)   " ;
    cout << "(a || b) " << ( a || b ) << "(true)   " ;
    cout << "(b || b) " << ( b || b ) << "(false)" << endl;

    cout << "NOT logic gates: " ;
    cout << "a = " << a << " !a = " << !a << " " ;
    cout << "b = " << b << " !b = " << !b << endl ;


    return 0;
}
