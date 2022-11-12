#include <string>
#include <iostream>
using namespace std;

void replaceAll(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}
int main()
{
    string text = "The quick brown fox jumped over the lazy dog" ;
    cout << "Original: " << text << endl ;
    replaceAll( text, "lazy", "sleeping" ) ;
    cout << "Replaced: " << text << endl ;

    return 0;
}
