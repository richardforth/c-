#include <stdio.h> // I have a feeling this is C, not C++
                   // because in C++ we have <fstream>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is test #1...\n");
    fputs("This is test #2...\n", fp);
    fclose(fp);

    return 0;
}
