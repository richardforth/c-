#include <string>
#include <iostream>
using namespace std;

class Man
{
    public:
        void speak()
        {
            cout << endl << "Hello!" ;
        }
        void speak(string msg)
        {
            cout << endl << "    " << msg  ;
        }
};

class Hombre : public Man
{
    public:
        void speak(string msg)
        {
            cout << endl << msg  ;
        }
};


int main()
{
    Man henry ;
    Hombre enrique ;

    henry.speak() ;
    henry.speak( "It's a beautiful evening." ) ;

    enrique.speak( "Hola" ) ;
    enrique.Man::speak( "Es una tarde hermosa." ) ;

    return 0 ;
}
