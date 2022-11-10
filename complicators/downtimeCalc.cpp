#include <iostream>
#include <iomanip>
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
    cout << " ARG4 (expects float) - > Input service level agreement (SLA) percentage" << endl;
    cout << endl;
    cout << "Example: " << endl;
    cout << "  downtimeCalc.exe October 6700 99.75 99.99" << endl;
    exit(1);
}

bool double_equals(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
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

int calcDowntime(string m, int d, int s, float p, float sla)
{
    string month = m;
    int days = d;
    int seconds_down = s;
    double uptime_pct = static_cast <double> ( p );

    cout << endl;
    cout << "**************************************" << endl;
    cout << "*******  R  E  S  U  L  T  S   *******" << endl;
    cout << "**************************************" << endl;
    string str = "Days in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << days << endl;

    int hours = (24 * days);
    str = "Hours in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << hours << endl;


    int minutes = (60 * hours);
    str = "Minutes in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << minutes << endl;

    int seconds = (60 * minutes);
    str = "Seconds in " +  static_cast<string>(month) + ":";
    cout << left << setw(30) << str << right << setw(8) << seconds << endl;


    cout << left << setw(34) << "Uptime Reported (%): ";
    fprintf(stdout, "%.2f", uptime_pct);
    cout << endl;
    cout << left << setw(34) << "SLA Reported (%): ";
    fprintf(stdout, "%.2f", sla);
    cout << endl;
    cout << "Note the following numbers should match" << endl;
    double downtime_pct = (100.00 - uptime_pct);
    cout << left << setw(34) << "Downtime Reported (%): " << downtime_pct << endl;
    // calculate seconds downtime as a percentage of total seconds in month
    double calc_downtime_pct = ((static_cast<double>(seconds_down) / seconds) * 100 );
    cout << left << setw(34) << "Downtime Calculated (%): ";
    fprintf(stdout, "%.2f", calc_downtime_pct);
    cout << endl;
    cout << "**************************************" << endl;
    cout << "Conclusions:" << endl;
    if (uptime_pct < sla)
    {
        cout << " - The SLA was not met." << endl;
    }
    else
    {
        cout << "- the SLA was met."  << endl;
    }
    if (double_equals(calc_downtime_pct, downtime_pct) == 1)
    {
        cout << " - All downtime was accounted for." << endl;
    }
    else
    {
        cout << " - Not all downtime was accounted for. ("  << calc_downtime_pct << " <> " << downtime_pct << ")" << endl;
    }

    cout << "**************************************" << endl;




    return 0;
}


int main(int argc, char** argv)
{
    if (argc != 5)
    {
        somethingWentWrong();
    }
    cout << "**************************************" << endl;
    cout << "****** C++ Downtime Calculator *******" << endl;
    cout << "**************************************" << endl;
    int days, hours, minutes, seconds;
    float pct, sla;

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
    string servicelevel_pct = argv[4];
    sla = stod(servicelevel_pct);


    cout << "Inputs:" << endl;
    cout << " - month: " << month << endl;
    cout << " - seconds_down: " << seconds << endl;
    cout << " - uptime_pct: " << uptime_pct << endl;
    cout << " - sla_pct: " << sla << endl;



    if (month == "january")
    {
            days = January_days;
    }
    else if (month == "february")
    {
        cout << endl;
        cout << "**************************************" << endl;
        cout << "* LEAP YEAR CHECK FOR FEBRUARY INPUT *" << endl;
        cout << "**************************************" << endl;
        cout << "Is " << currentYear << " a leap Year? " << ((isLeapYear() == 1) ? "Yes" : "No") << endl;
        if (isLeapYear() == 1)
        {
            days = February_leap_days;
            calcDowntime(month, days, seconds, pct, sla);
        }
        else
        {
            days = February_days;
            calcDowntime(month, days, seconds, pct, sla);
        }
    }
    else if (month == "march")
    {
        days = March_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "april")
    {
        days = April_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "may")
    {
        days = May_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
        else if (month == "june")
    {
        days = June_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "july")
    {
        days = July_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "august")
    {
        days = August_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "september")
    {
        days = September_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "october")
    {
        days = October_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "november")
    {
        days = November_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else if (month == "december")
    {
        days = December_days;
        calcDowntime(month, days, seconds, pct, sla);
    }
    else
    {
        somethingWentWrong();
    }

    return 0;
}
