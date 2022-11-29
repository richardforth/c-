#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Don't use magic numbers." << endl;
    cout << "Nobody will know what 44 means in your code." << endl;
    cout << "Instead, give meaningful names to variables," << endl;
    cout << "and assign values to those variables" << endl << endl;

    // for example
    const string NAME = "Richard";
    const int AGE = 44;

    cout << "My name is " << NAME << " and I am " << AGE << " years old." << endl;

    return 0;
}
