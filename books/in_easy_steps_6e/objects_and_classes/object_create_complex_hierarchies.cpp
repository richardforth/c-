#include <iostream>
using namespace std;

// ADT : Abstract Data Type of a boat as a base class
class Boat
{
    protected:
        int length ;
    public:
        int getLength() { return length ; }
        virtual void Model() = 0 ;
};


// ADT : Abstract Data Type as a derived Boat class
class Sailboat : public Boat
{
    protected:
        int mast ;
    public:
        int getMast() { return mast ; }
        virtual void Boom() = 0 ;
} ;

// Create a Laser class Sailboat
// derived from the Sailboat Class
// which in turn is derived from the Boat base class
class Laser : public Sailboat
{
public:
    Laser() { mast = 19 ; length = 35 ; }
    void Model() { cout << "Laser Classic" << endl ; }
    void Boom() { cout << "Boom: 14ft" << endl ; }
    ~Laser() ;
};


int main()
{
    Laser* pLaser = new Laser ;
    pLaser -> Model() ;
    cout << "Length: " << pLaser -> getLength() << "ft" << endl ;
    cout << "Height: " << pLaser -> getMast() << "ft" << endl ;
    pLaser -> Boom() ;


    return 0;
}
