# include <iostream>
using namespace std;

int main()
{
    int i, j;

    for ( i = 1 ; i < 4 ; i++ )
    {
        cout << " > Outer Loop iteration: " << i << endl;
        for ( j = 1 ; j < 4 ; j++ )
        {
            cout << " --> Inner Loop iteration: " << j << endl;
        }
    }

    return 0;
}
