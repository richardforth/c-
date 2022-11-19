#include "ops.h"
#include <iostream>
using namespace std;

Calculator::Calculator()
{
    status = true ;
}

void Calculator::launch()
{
    cout << "*** SUM CALCULATOR ***" << endl ;
    cout << "Enter a number, and operator (+, -, *, /), and another number." << endl ;
    cout << "Hit Return to calculate. Enter 0 to exit." << endl ;
}

void Calculator::readInput()
{
    cout << "> " ; cin >> num1 ;
    if ( num1 == 0 ) status - false ;
    else { cin >> oper ; cin >> num2 ; }
}

void Calculator::writeOutput()
{
    if ( status ) switch( oper )
    {
        case '+' : { cout << ( num1 + num2 ) << endl ; break ; }
        case '-' : { cout << ( num1 - num2 ) << endl ; break ; }
        case '*' : { cout << ( num1 * num2 ) << endl ; break ; }
        case '/' : if ( num2 != 0 )
            { cout << ( num1 / num2 ) << endl ; break ; }
            else { cout << "Cannot divide by 0." << endl ; break ; }
    }
}

bool Calculator::run()
{
    return status ;
}
