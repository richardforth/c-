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
        void bark( string noise ) {cout << noise << endl ; }
        // getters and setters
        int getAge() { return age ; }
        int getWeight() { return weight ; }
        string getColor() { return color ; }
        // Constructor prototype
        Dog ( int, int, string ) ;
        Dog( int, int ) ;
        Dog() ;
        // Destructor prototype
        ~Dog() ;
};

// Original Constructor definition
Dog::Dog( int age, int weight, string color )
{
    this -> age = age ;
    this -> weight = weight ;
    this -> color = color ;
}

// Overloaded Constructor definition 1 with default values
// takes no arguments at all
Dog::Dog()
{
    age = 1 ;
    weight = 2 ;
    color = "black" ;
}

// Overloaded Constructor definition 2, takes 2 values
// default color is white
Dog::Dog( int age, int weight )
{
    this -> age = age ;
    this -> weight = weight ;
    color = "white" ;
}

// Destructor definition
Dog::~Dog()
{
    cout << "Object destroyed." << endl ;
}

int main()
{
    Dog rex ;
    Dog fido( 3, 15, "brown" ) ;
    Dog pooch( 4, 18, "gray" ) ;
    Dog floofy( 5, 27 );
    Dog sammy( 2,6 ) ;

    cout << "Fido is a " << fido.getColor() << " dog." << endl ;
    cout << "Fido is " << fido.getAge() << " years old." << endl ;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl ;
    fido.bark() ;

    cout << "Pooch is a " << pooch.getAge() ;
    cout << " year old " << pooch.getColor() ;
    cout << " dog who weighs " << fido.getWeight() ;
    cout << " pounds." ;
    pooch.bark() ;

    cout << "Rex is a " << rex.getAge() ;
    cout << " year old " << rex.getColor() ;
    cout << " dog who weighs " << rex.getWeight() ;
    cout << " pounds." ;
    rex.bark("GRRR") ;

    cout << "Floofy is a " << floofy.getAge() ;
    cout << " year old " << floofy.getColor() ;
    cout << " dog who weighs " << floofy.getWeight() ;
    cout << " pounds." ;
    floofy.bark("Rururururrruuu") ;

    cout << "Sammy is a " << sammy.getAge() ;
    cout << " year old " << sammy.getColor() ;
    cout << " dog who weighs " << sammy.getWeight() ;
    cout << " pounds." ;
    sammy.bark("BOWOW!") ;
    return 0 ;
}
