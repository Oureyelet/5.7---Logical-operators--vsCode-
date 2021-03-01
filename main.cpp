#include <iostream>
#include "first.h"

using namespace std;

int main()
{

    /*
    C++ has 3 logical operators:

    Operator 	    Symbol 	    Form 	    Operation
    Logical NOT 	! 	        !x 	        true if x is false, or false if x is true
    Logical AND 	&& 	        x && y 	    true if both x and y are true, false otherwise
    Logical OR 	    || 	        x || y 	    true if either x or y are true, false otherwise
    */

    /*----------
    Logical NOT
    -----------*/

    int x{};
    cin >> x;
    bool tooLarge{ x > 100 }; //tooLarger is true if x > 100.
    if (!tooLarge)
        cout << "// do something with x\n";
    else
        cout << "// print an error\n";
    
    /*----------
    Logical OR
    -----------*/

    cout << "Enter a number: ";
    int value{};
    cin >> value;

    if( value == 1 || value == 0 || value == 777) //You can string together many logical OR statements.
        cout << "You picked 0 or 1 or 777\n";
    else
        cout << "You did not pick 0 or 1 or 777\n";

    /*----------
    Logical AND
    -----------*/

    cout << "Enter another number: ";
    int another_value{};
    cin >> another_value;

    if( another_value > 10 && another_value < 20 )
        cout << "Your choice is between 10-20\n";
    else
        cout << "Your choice is not between 10-20\n";



    return 0;
}