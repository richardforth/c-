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
        // Constructor prototype
        Dog ( int, int, string ) ;
        // Destructor prototype
        ~Dog() ;
};

// Constructor definition
Dog::Dog( int age, int weight, string color )
{
    this -> age = age ;
    this -> weight = weight ;
    this -> color = color ;
}

// Destructor definition
Dog::~Dog()
{
    cout << "Object destroyed." << endl ;
}

int main()
{
    Dog fido( 3, 15, "brown" ) ;
    Dog pooch( 4, 18, "gray" ) ;

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
