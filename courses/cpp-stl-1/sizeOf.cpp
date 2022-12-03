#include <iostream>
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
    return 0;
}
