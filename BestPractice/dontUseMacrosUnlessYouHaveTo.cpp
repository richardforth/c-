#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

const string RULE = "************************************";
const string TITLE = "Don't use macros: use const instead.";

int main()
{
    cout << RULE << endl << TITLE << endl << RULE << endl ;
    cout << endl << "CONST can work the same but the problem" << endl ;
    cout << "With macros is that they are not safe, as they " << endl ;
    cout << "ignore scopes, ignore the type system, and hijack" << endl ;
    cout << "Symbols they define for the remainder of a file." << endl ;

    return 0;
}
