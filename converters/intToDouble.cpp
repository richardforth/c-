#include <iostream> // cout / endl
#include <cstdio> // fprintf
#include <iomanip> // setprecision
#include <typeinfo> // typeid
using namespace std;

int main()
{
    // this method doesnt force to 99 to 99.00 as hooped
    int num = 99;
    cout << typeid(num).name() << endl;
    cout << setprecision(3) << num << endl;

    double pct = static_cast <double> ((num + 0.1) - 0.1);
    cout << typeid(pct).name() << endl;
    cout << setprecision(3) << pct << endl;

    //but this method does force to 99 to 99.00 in output
    cout << typeid(pct).name() << endl;
    fprintf(stdout, "%.2f", pct);
    cout << endl;
    return 0;
}
