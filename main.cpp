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
    //In order for logical OR to return false, both operands must evaluate to false, otherwise true.

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
    //In order for logical AND to return true, both operands must evaluate to true, otherwise false.

    cout << "Enter another number: ";
    int another_value{};
    cin >> another_value;

    if( another_value > 10 && another_value < 20 ) //As with logical OR, you can string together many logical AND statements.
        cout << "Your choice is between 10-20\n";
    else
        cout << "Your choice is not between 10-20\n";

    /*----------------------
    Mixing ANDs and ORs
    -----------------------*/

    //When mixing logical AND and logical OR in a single expression, 
    //explicitly parenthesize each operation to ensure they evaluate how you intend.

    /*-----------------------------------------------
    Where’s the logical exclusive or (XOR) operator?
    -------------------------------------------------*/
    //C++ doesn’t provide a logical XOR operator.


    /*----------------------
    Quiz time
    -----------------------*/

    //Question #1:

    //a) (true && true) || false
        //answer: true.
    
    //c) (false && true) || false || true
        //answer: true.

    //d) (5 > 6 || 4 > 3) && (7 > 8)
    //answer: (false || true ) && false > false.

    //e) !(7 > 6 || 3 > 4)
        //answer: false
        








    return 0;
}