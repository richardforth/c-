#include <iostream>
using namespace std;

int main()
{

    // pointer dereferencing means:
    // "Getting the value stored at the memory addressed by the pointer"
    int a = 8, b = 16;

    int* aPtr = &a ;
    int* bPtr ;
    bPtr = &b ;

    // DONT FORGET: These are pointers to the pointer addresses of a and b
    cout << endl << "Addresses of pointers..." << endl ;
    cout << "aPtr: " << &aPtr << endl ;
    cout << "bPtr: " << &bPtr << endl ;

    // Here we see the pointer addresses held in each pointer to a and b respectively
    cout << endl << "Values in pointers..." << endl ;
    cout << "aPtr: " << aPtr << endl ;
    cout << "bPtr: " << bPtr << endl ;

    // WHAT WE ARE SAYING HERE IS:
    // Give me the VALUES at the pointer addresses (a and b respectively) held in these pointers (aPtr and bPtr respectively)
    // so aPtr ->> value Of pointer to a (or a = 8)
    //    bPtr ->> value Of pointer to b (or b = 16)
    cout << endl <<  "Values in addresses pointed to..." << endl ;
    cout << "a: " << *aPtr << endl ;
    cout << "b: " << *bPtr << endl ;

    // if that still doesnt make sense, compile and run, and observe the output  - you should see for example that:
    // aPtr is a variable, which has a memory address itself, which contains the memory address of variable a
    // bPtr is a variable, which has a memory address itself, which contains the memory address of variable b
    // the final block therefore asks the questions
    //  - Tell me the value,
    //          held at the address of the variable a,
    //                which is held at the address of the variable aPtr
    //  - Tell me the value,
    //          held at the address of the variable b,
    //                which is held at the address of the variable bPtr
    return 0 ;
}
