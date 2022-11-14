#include <string>
#include <iostream>
using namespace std;

int main()
{

    string text = "I can resist anything but temptation." ;
    int num, stringlen, stringcap;

    stringlen = text.size() ;
    stringcap = text.capacity() ;
    cout << "String: " << text << endl ;
    cout << "String length: " << stringlen << endl ;
    cout << "String capacity: " << stringcap << endl ;

    // find an existent substring
    num = text.find( "resist", 0 ) ;
    cout << "Position: " << num << endl ;

    // find a non-existent substring
    num = text.find( "nonsuch", 0 ) ;
    cout << "Result: " << num << endl ;

    // find the first occurrence of any character in "If"
    num = text.find_first_of("If") ;
    cout << "First I: " << num << endl;

    // find first occurrence of any character not in "If"
    num = text.find_first_not_of("If") ;
    cout << "First I: " << num << endl;

    // find the last occurrence of the character "t"
    num = text.find_last_of("t") ;
    cout << "Last t: " << num << endl;

    // find the last occurrence of the character "t"
    num = text.find_last_not_of("t") ;
    cout << "Last not t: " << num << endl;

    return 0;
}
