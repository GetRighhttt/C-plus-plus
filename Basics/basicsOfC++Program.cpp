#include <iostream> // necessary for all c++ programs to load all libraries

using namespace std; // tells the compiler we're using the standard c++ library

int main()
{ // main function in c++ program; entry point

    /**n
     * The mian function works sychronously, so all the functions run in order.
     */
    cout << "This is the main function in c++ program\n"
         << endl;

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

    return 0; // necessary for all c++ programs to end main function.
}