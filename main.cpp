#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    START:
    system("cls");
    cout << "Enter Password :";
        char pass[32];
        int i=0;
        char a; // temp a;
        for(i=0;;){
         a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')){
            pass[i] = a;
        ++i;
        cout << "*";
        }
        if(a=='\b'&&i>=1){ // if backspace is entered
            cout << "\b \b";
            --i;
        }
        if(a=='\r'){  // if enter is pressed
            pass[i] = '\0';
            break;
        }
        }
        cout << "\nYou Entered." << pass ;
        if(i<=5){
            cout << "\nMinimum 6 digits required.\nEnter Again";
            getch(); // it was not pause
            goto START;
        }
    return 0;
}

// This code is not supported in C++17. So always use old libraries.
