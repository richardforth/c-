#include <vector>
#include <iostream>
using namespace std;

int main()
{

    // Reminder: A vector is an array whose size can be changed
    vector <int> vec( 10 );
    int i = 0;

    while ( i < vec.size() )
    {
        i++;                               // Increment counter
        vec[ i-1 ] = i;                    // Assign count to element
        cout << " | " << vec.at( i-1 ) ;   // Print each element in the array
    }

    return 0;
}
