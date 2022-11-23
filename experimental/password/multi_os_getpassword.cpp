#if defined _WIN32
    #define PLATFORM "Windows"
    #include <windows.h>
#elif defined __linux
    #define PLATFORM "Linux"
    #include <termios.h> // linux only
    #include <unistd.h>
    #include <stdio.h>
#endif // defined
#include <iostream>
#include <string>
using namespace std;


int getch() {
    int ch;
    struct termios t_old, t_new;

    tcgetattr(STDIN_FILENO, &t_old);
    t_new = t_old;
    t_new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &t_new);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &t_old);
    return ch;
}





string getpasswd(const char *prompt, bool show_asterisk=true)
{
  const char BACKSPACE=127;
  const char RETURN=10;

  string password;
  unsigned char ch=0;

  cout <<prompt<<endl;

  while((ch=getch())!=RETURN)
    {
       if(ch==BACKSPACE)
         {
            if(password.length()!=0)
              {
                 if(show_asterisk)
                 cout <<"\b \b";
                 password.resize(password.length()-1);
              }
         }
       else
         {
             password+=ch;
             if(show_asterisk)
                 cout <<'*';
         }
    }
  cout <<endl;
  return password;
}


string getpass(const char *prompt, bool show_asterisk=true)
{
  const char BACKSPACE=8;
  const char RETURN=13;

  string password;
  unsigned char ch=0;

  cout <<prompt<<endl;

  DWORD con_mode;
  DWORD dwRead;

  HANDLE hIn=GetStdHandle(STD_INPUT_HANDLE);

  GetConsoleMode( hIn, &con_mode );
  SetConsoleMode( hIn, con_mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT) );

  while(ReadConsoleA( hIn, &ch, 1, &dwRead, NULL) && ch !=RETURN)
    {
       if(ch==BACKSPACE)
         {
            if(password.length()!=0)
              {
                 if(show_asterisk)
                     cout <<"\b \b";
                 password.resize(password.length()-1);
              }
         }
       else
         {
             password+=ch;
             if(show_asterisk)
                 cout <<'*';
         }
    }
  cout <<endl;
  return password;
}


/*

TODO LIST:

1. [ done ] add all the functions from the last two programs here
2. [ tba  ] Using the macros above determine the OS and present the correct options / call the correct functions.
    - Note because we couldnt have two functions the same
        - Linux getpasswd()
        - Windows getpass()


*/


int main ()
{
    if ( PLATFORM == "Windows" )
        cout << "Performing Windows Only Tasks..." << endl ;
    if ( PLATFORM == "Linux" )
        cout << "Performing Linux Only Tasks..." << endl ;
    return 0 ;
}
