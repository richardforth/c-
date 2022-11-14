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
        void setValues( int, int, string ) ;
};

void Dog::setValues( int age, int weight, string color )
{
    this -> age = age ;
    this -> weight = weight ;
    this -> color = color ;
}

int main()
{
    Dog fido ;
    fido.setValues( 3, 15, "brown" ) ;

    Dog pooch ;
    pooch.setValues( 4, 18, "gray" ) ;

    cout << "Fido is a " << fido.getColor() << " dog." << endl ;
    cout << "Fido is " << fido.getAge() << " years old." << endl ;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl ;
    fido.bark() ;

    cout << "Pooch is a " << pooch.getAge() ;
    cout << " year old " << pooch.getColor() ;
    cout << " dog who weighs " << fido.getWeight() ;
    cout << " pounds." ;
    pooch.bark() ;

    return 0 ;
}
