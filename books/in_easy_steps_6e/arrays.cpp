#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;


    int x;
    double d;
    cout << sizeof(x) << endl;
    x = 10;
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(10ll) << endl;
    cout << sizeof(10.5) << endl;

    // arrays
    int num[ ] = {1, 1, 1, 1, 1};
    cout << sizeof(num) << endl; // 20

    // there are 5 elements of type int which is 4 bytes long (20/4 = 5)
    cout << sizeof(num)/sizeof(int) << endl; // 5

    // vector does not use sizeof, it has its own size(method)
    vector <string> breakfast{"sausage"};
    cout << breakfast.size() << endl;
    return 0;
}
