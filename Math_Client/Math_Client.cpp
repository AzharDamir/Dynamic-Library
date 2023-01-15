// Math_Client.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "MathLibrary.h"
using namespace std;
int main()
{
   
    fibonacci_init(1, 1);
    
    do {
        cout << fibonacci_index() << ": "
            << fibonacci_current() << endl;
    } while (fibonacci_next());
   
    cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << endl;
}