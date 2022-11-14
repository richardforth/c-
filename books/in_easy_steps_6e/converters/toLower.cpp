#include <iostream>
#include <locale> // tolower
using namespace std;

string toLower(string s) {
    for(char &c : s)
        c = tolower(c);
    return s;
}


int main()
{
    string strUpper = "HELLO WORLD!";
    string strLower = toLower(strUpper);
    cout << "Original String: " << strUpper << endl;
    cout << "Modified String: " << strLower << endl;
    return 0;
}
