#include <iostream>
/**
 * All files in C++ have header files that begin with #include. These
 * serve the purpose of allowing C++ programs to include libraries in
 * C++.
 *
 * This is also called a preprocessor statement. Anything that begins with a hash
 * is a preprocessor statement - the process compiles before the program is ran.
 */

/**
 * Using namespace tells the C++ compiler that we are going to use the standard library "std"
 * in this main program.
 */
using namespace std;

int main()
{ // main function in c++ program; entry point

    /**n
     * The main function works sychronously, so all the functions run in order.
     */
    cout << "This is the main function in c++ program\n"
         << endl;
    // << operator that is basically a function.

    cin.get(); // gets the character or group of characters we type

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    /*
    Output:
    This is the main function in c++ program

Size of char : 1
Size of int : 4
Size of short int : 2
Size of long int : 8
Size of float : 4
Size of double : 8
Size of wchar_t : 4
    */

    return 0; // necessary for all c++ programs to end main function, and if it executes successfully
    // the main function will return 0;
}