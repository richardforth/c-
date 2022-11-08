#include <iostream>
using namespace std;

int main()
{
  cout << "============================\n" <<
          " This program does nothing.\n" <<
          "============================\n" <<
          "The various cases in use:" << endl;
  cout << " - file_size: " << "(Snake Case)" << endl;
  cout << " - FileSize: " << "(Pascal Case)" << endl;
  cout << " - fileSize: " << "(Camel Case)" << endl;
  cout << " - iFileSize: " << "(Hungarian Notation)" << endl;

  return 0;
}
