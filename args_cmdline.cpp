#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout << "Argument count " << argc
         << "\nArguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}
