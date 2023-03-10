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

/**
 * Here is an example of a method that has a void or no return type.
 */
void Log(const char *message, string nameOne)
{
    cout << message << nameOne << endl;
}

int main()
{ // main function in c++ program; entry point

    char nameAS[10]; // creating a char array that we can use with cin.get().

    /**n
     * The main function works sychronously, so all the functions run in order.
     */
    cout << "This is the main function in c++ program\n"
         << endl;
    // << operator that is basically a function.

    cin.get(nameAS, 10); // gets the character or group of characters we type.

    cout << "\nHere are sizes of all the primitive types in C++." << endl;
    cout << "\nSize of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    std::cout << "Int Min " << std::numeric_limits<int>::min() << endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << endl;
    std::cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << endl;
    std::cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << endl;
    std::cout << "Long Int Min " << std::numeric_limits<long int>::min() << endl;
    std::cout << "Long Int Max " << std::numeric_limits<long int>::max() << endl;

    std::cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned long int>::min() << endl;
    std::cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned long int>::min() << endl;

    cout << "\nThe name entered is: " << nameAS << endl;

    cout << "The Log function that we retrieved from the other file: \n"
         << endl;
    Log("Buddy, ", "You have finished the basics section!");

    /*
    Output:

    This is the main function in c++ program

    Stefan

    Here are sizes of all the primitive types in C++.

    Size of char : 1
    Size of int : 4
    Size of short int : 2
    Size of long int : 8
    Size of float : 4
    Size of double : 8
    Size of wchar_t : 4
    Int Min -2147483648
    Int Max 2147483647
    Unsigned Int  Min 0
    Unsigned Int Max 4294967295
    Long Int Min -9223372036854775808
    Long Int Max 9223372036854775807
    Unsigned Long Int Min 0
    Unsigned Long Int Max 0

    The name entered is: Stefan
    The Log function that we retrieved from the other file:

    Buddy, You have finished the basics section!
    */

    return 0; // necessary for all c++ programs to end main function, and if it executes successfully
    // the main function will return 0;
}