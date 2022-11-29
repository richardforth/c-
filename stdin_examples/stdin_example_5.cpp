#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::array<char,80> buffer;
    FILE *pipe = stdin;
    if (!pipe)
    {
        std::cerr << "cannot open pipe to read" << endl;
        exit(-1);
    }
    int c = 0;
    while (fgets(buffer.data(), 80, pipe) != NULL)
    {
        c++;
        std::cout << c << ". " << buffer.data();
    }

    return 0;
}
