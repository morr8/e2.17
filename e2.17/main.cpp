/*
 ••• E2.17
 Writing large letters. A large letter H can be produced like this:
 
 *   *
 *   *
 *****
 *   *
 *   *
 It can be defined as a string constant like this:
 
 const string LETTER_H =
 "*   *\n*   *\n*****\n*   *\n*   *\n";
 (The \n character is explained in Special Topic 1.1.) Do the same for the letters E, L, and O. Then write the message
 
 H
 E
 L
 L
 O
 in large letters.
 */

#include <iostream>

using namespace std;

int main()
{
    const string LETTER_H =
    "*   *\n*   *\n*****\n*   *\n*   *\n";
    
    const string LETTER_E = "*****\n*\n*****\n*\n*****\n";
    
    const string LETTER_L = "*\n*\n*\n*\n*****\n";
    
    const string LETTER_O = "   **  \n *   * \n*     *\n *   * \n   **  \n";
    
    cout << LETTER_H << endl << LETTER_E << endl << LETTER_L << endl
    << LETTER_L << endl << LETTER_O << endl;
    
    
}
