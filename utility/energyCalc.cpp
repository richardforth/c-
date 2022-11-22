#define RULE    "****************************************"
#define TITLE   "** C++ Monthly Energy Rate Calculator **"
#define LYCHK   "************ LEAP YEAR CHECK ***********"
#define RESULTS "************* RESULTS ******************"
#include <iostream>
#include <iomanip>
#include <cstdio> // fprintf
#include <string>
#include <ctime>
#include <math.h>
#include <locale> // tolower
//using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::left;
using std::right;
using std::setw;
using std::stod;
using std::locale;

time_t t = time(nullptr);
tm *const pTInfo = localtime(&t);
int currentYear = ( 1900 + pTInfo->tm_year);

int somethingWentWrong()
{
    cout << endl << "Error: Something went wrong. Check inputs:" << endl;
    cout << endl;
    cout << " ARG1 (expects char**)- > Input month" << endl;
    cout << " ARG2 (expects float) - > Input pence per hour" << endl;
    cout << endl;
    cout << "Example: " << endl;
    cout << "  energyCalc.exe October 0.33 "<< endl;
    exit(1);
}

string toLower(string s) {
    for(char &c : s)
        c = tolower(c);
    return s;
}

bool isLeapYear()
{
    if (currentYear % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int calcEnergyCost(string m, int d, float pph)
{
    string month = m;
    int days = d;
    int hours;
    double fPph = static_cast <double> ( pph );

    cout << endl;
    cout << RULE << endl;
    cout << RESULTS << endl;
    cout << RULE << endl;
    string str = "Days in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << days << endl;

    hours = (24 * days);
    str = "Hours in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << hours << endl;


    cout << left << setw(34) << "Pence per Hour Reported (GBP): ";
    fprintf(stdout, "%.2f", fPph);
    cout << endl;

    // calculate energy price by price per hour time days in month
    double calc_energy_price_mo = (hours * fPph) ;
    cout << left << setw(34) << "Monthly Energy Cost (GBP): " ;
    fprintf(stdout, "%.2f", calc_energy_price_mo);
    cout << endl ;
    double calc_energy_price_yr = (calc_energy_price_mo * 12) ;
    cout << left << setw(34) << "Yearly Energy Cost (GBP): " ;
    fprintf(stdout, "%.2f", calc_energy_price_yr);
    cout << endl ;
    cout << RULE << endl;
    cout << "Note: Doesnt include standing charges" << endl ;
    cout << RULE << endl;

    return 0;
}


int main(int argc, char** argv)
{
    if (argc != 3)
    {
        somethingWentWrong();
    }
    cout << RULE << endl;
    cout << TITLE << endl;
    cout << RULE << endl;
    int days, hours;
    double pph;

    // Thirty days hath September...
    const int September_days = 30;

    // ...April, June, and November.
    const int April_days     = September_days;
    const int June_days      = September_days;
    const int November_days  = September_days;

    // All the rest have 31...
    const int January_days   = 31;
    const int March_days     = January_days;
    const int May_days     = January_days;
    const int July_days     = January_days;
    const int August_days     = January_days;
    const int October_days     = January_days;
    const int December_days     = January_days;

    // ..except February, which has 28 days each year...
    const int February_days     = 28;

    // .. and 29 days each leap year.
    const int February_leap_days     = 29;

    string m = argv[1];
    string month = toLower(m);
    // attempting to convert from char** to string and then from string to int
    pph = stod(argv[2]);


    cout << "Inputs:" << endl;
    cout << " - month: " << month << endl;
    cout << " - price per hour: " << pph << endl;

    if (month == "january")
    {
            days = January_days;
            calcEnergyCost(month, days, pph);
    }
    else if (month == "february")
    {
        cout << endl;
        cout << RULE << endl;
        cout << LYCHK << endl;
        cout << RULE << endl;
        cout << "Is " << currentYear << " a leap Year? " << ((isLeapYear() == 1) ? "Yes" : "No") << endl;
        if (isLeapYear() == 1)
        {
            days = February_leap_days;
            calcEnergyCost(month, days, pph);
        }
        else
        {
            days = February_days;
            calcEnergyCost(month, days, pph);
        }
    }
    else if (month == "march")
    {
        days = March_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "april")
    {
        days = April_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "may")
    {
        days = May_days;
        calcEnergyCost(month, days, pph);
    }
        else if (month == "june")
    {
        days = June_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "july")
    {
        days = July_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "august")
    {
        days = August_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "september")
    {
        days = September_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "october")
    {
        days = October_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "november")
    {
        days = November_days;
        calcEnergyCost(month, days, pph);
    }
    else if (month == "december")
    {
        days = December_days;
        calcEnergyCost(month, days, pph);
    }
    else
    {
        somethingWentWrong();
    }

    return 0;
}
