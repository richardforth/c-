#include <string>
#include <iostream>
using namespace std;

int main()
{

    string text = "I do like the seaside." ;
    int stringlen, stringcap;

    stringlen = text.size() ;
    stringcap = text.capacity() ;
    cout << "Original: " << text << endl ;
    cout << "  String length: " << stringlen << endl ;
    cout << "  String capacity: " << stringcap << endl ;

    // insert a substring at a certain position
    text.insert( 10, "to be beside " ) ;
    stringlen = text.size() ;
    stringcap = text.capacity() ;
    cout << "Inserted: " << text << endl ;
    cout << "  String length: " << stringlen << endl ;
    cout << "  String capacity: " << stringcap << endl ;


    // delete 2 characters starting at index 3
    text.erase( 2, 3 ) ;
    stringlen = text.size() ;
    stringcap = text.capacity() ;
    cout << "Erased: " << text << endl ;
    cout << "  String length: " << stringlen << endl ;
    cout << "  String capacity: " << stringcap << endl ;

    // replace the text from position 7 to position 25 with a new substring
    text.replace( 7, 25, "strolling by the sea") ;
    stringlen = text.size() ;
    stringcap = text.capacity() ;
    cout << "Replaced: " << text << endl ;
    cout << "  String length: " << stringlen << endl ;
    cout << "  String capacity: " << stringcap << endl ;


    // Copy 9 characters from position 7 onwards
    cout << "Copied: " << text.substr( 7, 9) << endl;

    // Print the last character in the string
    cout << "Last character: " << text.at( text.size() - 1 ) << endl;

    return 0;
}
