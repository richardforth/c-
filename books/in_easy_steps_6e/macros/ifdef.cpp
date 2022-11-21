#ifndef BOOK
    #define BOOK "C++ Programming in easy steps"
#endif // BOOK
#include <iostream>
using namespace std;

int main()
{
    #ifdef BOOK
        cout << BOOK ;
    #endif // BOOK

    #ifndef AUTHOR
        #define AUTHOR "Mike McGrath"
        cout << " by " << AUTHOR << endl ;
    #endif // AUTHOR

    #ifdef BOOK
        #undef BOOK
    #endif // BOOK

    #ifndef BOOK
        #define BOOK "Linux in easy steps"
        cout << BOOK << " by " << AUTHOR << endl ;
    #endif // BOOK

    return 0;
}
