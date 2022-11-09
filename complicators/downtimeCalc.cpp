#include <iostream>
#include <cstdio> // fprintf
#include <string>
#include <ctime>
#include <math.h>
#include <locale> // tolower
using namespace std;

time_t t = time(nullptr);
tm *const pTInfo = localtime(&t);
int currentYear = ( 1900 + pTInfo->tm_year);

int somethingWentWrong()
{
    cout << endl << "Error: Something went wrong. Check inputs:" << endl;
    cout << endl;
    cout << " ARG1 (expects char**)- > Input month" << endl;
    cout << " ARG2 (expects integer) - > Input seconds" << endl;
    cout << " ARG3 (expects float) - > Input percentage" << endl;
    cout << endl;
    cout << "Example: " << endl;
    cout << "  downtimeCalc.exe October 6700 99.75" << endl;
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

int calcDowntime(string m, int d, int s, float p)
{
    string month = m;
    int days = d;
    int seconds_down = s;
    double uptime_pct = static_cast <double> ( p );

    cout << endl;
    cout << "***************************************" << endl;
    cout << "*******  R  E  S  U  L  T  S   ********" << endl;
    cout << "***************************************" << endl;

    cout << "Days in " << month << ": " << days << endl;
    int hours = (24 * days);
    cout << "Hours in " << month << ": " << hours << endl;
    int minutes = (60 * hours);
    cout << "Minutes in " << month << ": " << minutes << endl;
    int seconds = (60 * minutes);
    cout << "Seconds in " << month << ": " << seconds << endl;
    cout << "Seconds of Downtime: " << seconds_down << endl;
    cout << "Uptime Reported (%): ";
    fprintf(stdout, "%.2f", uptime_pct);
    cout << endl;
    cout << "Note: the following 2 numbers should match" << endl;
    double downtime_pct = (100.00 - uptime_pct);
    cout << "Downtime Reported (%): " << downtime_pct << endl;
    // calculate seconds downtime as a percentage of total seconds in month
    double calc_downtime_pct = ((static_cast<double>(seconds_down) / seconds) * 100 );
    cout << "Downtime Calculated (%): ";
    fprintf(stdout, "%.2f", calc_downtime_pct);
    cout << endl;
    cout << "***************************************" << endl;




    return 0;
}


int main(int argc, char** argv)
{
    if (argc != 4)
    {
        somethingWentWrong();
    }
    cout << "***************************************" << endl;
    cout << "****** C++ Downtime Calculator ********" << endl;
    cout << "***************************************" << endl;
    int days, hours, minutes, seconds;
    float pct;

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
    string downtime_seconds = argv[2];
    seconds = stoi(downtime_seconds);
    string uptime_pct = argv[3];
    pct = stod(uptime_pct);


    cout << "Inputs:" << endl;
    cout << " - month: " << month << endl;
    cout << " - seconds_down: " << seconds << endl;
    cout << " - uptime_pct: " << uptime_pct << endl;



    if (month == "january")
    {
            days = January_days;
    }
    else if (month == "february")
    {
        cout << endl;
        cout << "***************************************" << endl;
        cout << "* LEAP YEAR CHECK FOR FEBRUARY INPUT  *" << endl;
        cout << "***************************************" << endl;
        cout << "Is " << currentYear << " a leap Year? " << ((isLeapYear() == 1) ? "Yes" : "No") << endl;
        if (isLeapYear() == 1)
        {
            days = February_leap_days;
            calcDowntime(month, days, seconds, pct);
        }
        else
        {
            days = February_days;
            calcDowntime(month, days, seconds, pct);
        }
    }
    else if (month == "march")
    {
        days = March_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "april")
    {
        days = April_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "may")
    {
        days = May_days;
        calcDowntime(month, days, seconds, pct);
    }
        else if (month == "june")
    {
        days = June_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "july")
    {
        days = July_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "august")
    {
        days = August_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "september")
    {
        days = September_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "october")
    {
        days = October_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "november")
    {
        days = November_days;
        calcDowntime(month, days, seconds, pct);
    }
    else if (month == "december")
    {
        days = December_days;
        calcDowntime(month, days, seconds, pct);
    }
    else
    {
        somethingWentWrong();
    }

    return 0;
}
