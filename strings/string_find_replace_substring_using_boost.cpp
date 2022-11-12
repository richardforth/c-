#include <iostream>
//requires string.hpp file to be present ins directory you add to compiler search folders
// eg C:\Program Files (x86)\Boost\boost_1_62_0\boost\algorithm\string.hpp
// with a "Search directory" added as "C:\Program Files (x86)\Boost\boost_1_62_0\"
// see: https://sourceforge.net/projects/boost/
//      https://www.boost.org/doc/libs/1_78_0/doc/html/string_algo/reference.html#header.boost.algorithm.string.replace_hpp
#include <boost/algorithm/string.hpp>
using namespace std;
using boost::replace_all;

int main()
{
    string text = "The quick brown fox jumped over the lazy dog" ;
    cout << "Original: " << text << endl ;
    replace_all( text, "lazy", "sleeping" ) ;
    cout << "Replaced: " << text << endl ;

    return 0;
}
