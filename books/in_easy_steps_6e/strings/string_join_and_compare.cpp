#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++" ;
    string term = " Programming";
    string text = "C++ Programming";

    // Concatenation (doesnt change the original string)
    cout << "Concatenated: " << ( lang + term ) << endl;
    cout << "Original: " << lang << endl;

    // Append with the append() string method function (changes the string)
    cout << "Appended: " << lang.append( term ) << endl;
    cout << "Original: " << lang << endl;

    // using equality operator (returns 1(true) or 0(false))
    cout << "Differ: " << ( lang == term ) << endl ;
    cout << "Match: " << ( lang == text ) << endl << endl ;

    // Using compare() string method function
    // (returns -1(less than), 0(exact match) or 1(greater than))
    // based on string values calculated
    cout << "Match: " << lang.compare( text ) << endl ;
    cout << "Differ: " << lang.compare( term ) << endl ;
    cout << "Lower ASCII: " << lang.compare( "zzzzz" ) << endl ;


    return 0;
}
