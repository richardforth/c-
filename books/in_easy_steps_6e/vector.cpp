#include <iostream>
#include <vector> // Include vector support
using namespace std;

int main()
{
    // Initialize a vector array of 3 elements of the value 100.
    vector <int> vec( 3,100 );

    cout << "Vector size: " << vec.size() << endl;
    cout << "Is empty? " << vec.empty() << endl;
    cout << "First element: " << vec.at(0) << endl;

    vec.pop_back(); // Remove final element
    cout << "Vector size: " << vec.size() << endl;
    cout << "Final element: " << vec.back() << endl;

    vec.clear(); // Remove all elements
    cout << "Vector size: " << vec.size() << endl;

    vec.push_back(200); // Add an element
    cout << "Vector size: " << vec.size() << endl;
    cout << "First element: " << vec.at(0) << endl;


    return 0;
}
