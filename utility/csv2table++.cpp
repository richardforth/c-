#include <vector> // Include vector support
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::stringstream;
using std::getline;
using std::right;
using std::setw;

int cols = 0 ;  // Create counter variable for columns.
int rows = 0 ;  // Create counter variable for rows.
int maxcols = 0, maxrows = 0; // variables to keep highscores
int cellsize = 0 , maxcellsize = 0 ; // variables to dynamically size tables based on content
vector <string> result ; // Create a string array.

const std::string WHITESPACE = " \n\r\t\f\v";

std::string ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s) {
    return rtrim(ltrim(s));
}

vector <string> processLine(string line)
{
    stringstream ss( line );
    while( ss.good() )
    {
        string substr;
        getline( ss, substr, ',' ) ;

        cellsize = substr.size() ;
        if (maxcellsize < cellsize)
            maxcellsize = cellsize ;
        cols++ ;
        if (maxcols < cols)
            maxcols = cols ;
        if (substr != "" )
            result.push_back( substr ) ;
        else
            cout << "Empty line ignored." << endl ;
    }
    return result;
}


int main(int argc, char *argv[])
{
    string line, fname ;
    std::array<char,16384> buffer;




    // TODO: check for stdin


    if (argc == 2)
    {
            cout << "Argument Count: " << argc << endl;
            cout << "Argument0: " << argv[0] << endl;
            cout << "Argument1: " << argv[1] << endl;
            fname = argv[1] ;
            ifstream reader( fname ) ; // Create input file object from argument provided.
            if( ! reader ) // Always check this.
            {
                cout << "Error opening input file" << endl ;
                return -1 ;
            }

            while( ! reader.eof() ) // Loop through data...
            {
                cols = 0; // reset counter each new line
                getline(reader, line);
                rows++ ;
                if (maxrows < rows)
                    maxrows = rows ;
                result = processLine(line) ;
            }
            reader.close() ;
    }
    else
    {
            FILE *pipe = stdin;
            if (!pipe)
            {
                std::cerr << "cannot open pipe to read" << endl;
                exit(-1);
            }
            int c = 0;
            string line;
            while (fgets(buffer.data(), 16384, pipe) != NULL)
            {
                c++;
                cols = 0; // reset counter each new line
                line = trim(buffer.data());
                rows++ ;
                if (maxrows < rows)
                    maxrows = rows ;
                result = processLine(line) ;
            }
    }



    cout << "Elements in result array: " << result.size() << endl ;
    cout << "Max Columns: " << maxcols << endl ;
    cout << "Max Rows: " << maxrows << endl ;
    cout << "Max Cell Size: " << (maxcellsize + 2) << endl ; // +2 for one space margin each side


    cols = 0 ;  // Reset and re-use counter variable for columns.
    rows = 0 ;  // Reset and re-use variable for rows.
    int i = 0 ; // Add a new counter variable
    while (i < result.size() )
    {
        if ( rows ==  0 )
        {
            cout << right << setw(1) << "+" ;
            cols = 0;
            while ( cols < maxcols )
            {
                cout <<  setw(maxcellsize +2 ) << string((maxcellsize + 2), '-') << setw( 2 ) << "-+" ;
                cols++ ;
            }
            cout << endl ;

            cout << right << setw(1) << "|" ;
            cols = 0 ; // reset cols to 0
            while (cols < maxcols)
            {
                cout << right << setw(maxcellsize +2 ) << result.at( i++ ) << setw( 2 ) << " |" ;
                cols++ ;
            }
            cout << endl ;
            cols = 0 ; // reset cols to 0
            cout << right << setw(1) << "+" ;
            while ( cols < maxcols )
            {
                cout <<  setw(maxcellsize +2 ) << string((maxcellsize + 2), '-') << setw( 2 ) << "-+" ;
                cols++ ;
            }
            cout << endl ;
            rows++ ;
        }
        else
        {
            cout << "|" ;
            cols = 0 ; // reset cols  for new row
            while (cols < maxcols)
            {
                cout << right << setw(maxcellsize +2 ) << result.at( i++ ) << setw( 2 ) << " |" ;
                cols++ ;
            }
            cout << endl ;
            rows++ ;
        }
    }
    cols = 0 ; // reset cols to 0
    cout << right << setw(1) << "+" ;
    while ( cols < maxcols )
    {
        cout <<  setw(maxcellsize +2 ) << string((maxcellsize + 2), '-') << setw( 2 ) << "-+" ;
        cols++ ;
    }
    cout << endl ;
    return 0 ;
}
