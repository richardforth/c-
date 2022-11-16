#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;


int main()
{
    string str =  "1,1,1,1, or something else ,1,1,1,0" ;
    stringstream ss( str ) ;
    vector<string> result ;

    while( ss.good() )
    {
        string substr;
        getline( ss, substr, ',' ) ;
        result.push_back( substr ) ;
    }

    cout << "Original string: " << str << endl ;

    for ( size_t i = 0; i < result.size(); i++)
         cout << "Vector array element " << i << " = " << "'" << result[i] << "'" << std::endl ;
    return 0;
}
