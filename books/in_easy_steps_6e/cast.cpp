#include <iostream>
using namespace std;

int main()
{

    int num = 7, factor = 2 ;
    char letter = 'A' ; float result = 0.0 ;

    cout << "Integer division: " << ( num / factor ) << endl ; // 3

    result = (float) ( num ) / factor ; // 3.5
    cout << "Cast division float: " << result << endl ;

    num = static_cast <int> ( letter ) ; // 65
    cout << "Cast character int: " << num << endl ;

    letter = static_cast <char> ( 70 ); // F
    cout << "Cast interger char: " << letter << endl ;


    return 0;
}
