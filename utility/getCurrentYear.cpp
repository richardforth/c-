#include <ctime>
#include <iostream>

int main()
{
  std::time_t t = std::time(nullptr);
  std::tm *const pTInfo = std::localtime(&t);
  std::cout << "Current year: " << 1900 + pTInfo->tm_year << '\n';
}
