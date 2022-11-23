#include <iostream>
using namespace std;



int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'} ;
    // same as char greeting[] = "Hello";
    // but not the same as string greeting = "Hello";
    // Interesting fact:
    // strings can be found inside a compiled program with the "strings" command
    //
    // eg: 
    //
    // $ strings myprog | grep Hello
    //
    // or
    //
    // c:\> strings myprog.exe | find Hello
    //
    // whereas char arrays, cannot be found   
    cout << greeting << endl; 

    return 0;
}
