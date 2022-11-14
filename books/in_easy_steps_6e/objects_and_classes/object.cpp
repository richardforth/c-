#include <string>
#include <iostream>
using namespace std;

class Dog
{
    private:
        int age, weight ;
        string color ;
    public:
        // public methods
        void bark() { cout << "WOOF!" << endl ; }
        // getters and setters
        int getAge() { return age ; }
        int getWeight() { return weight ; }
        string getColor() { return color ; }
        void setAge ( int yrs ) { age = yrs ; }
        void setWeight ( int lbs ) { weight = lbs ; }
        void setColor ( string hue ) { color = hue ; }


};

int main()
{
    Dog fido ;

    fido.setAge( 3 );
    fido.setWeight( 15 ) ;
    fido.setColor( "brown" ) ;

    cout << "Fido is a " << fido.getColor() << " dog." << endl ;
    cout << "Fido is " << fido.getAge() << " years old." << endl ;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl ;

    fido.bark() ;

    return 0 ;
}
