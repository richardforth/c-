#include <iostream>
using namespace std;

// Define and implement the function
// note that now we do not need to pre-declare the function
// so long as it is implemented before the main function.
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing Division 10 / 5 = " << 10 / 5 <<  endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi is 22.0 / 7 = " << 22.0 / 7 << endl;

	return 0;
}

int main()
{
	// use the return value of the offloaded function
	return DemoConsoleOutput();
}

