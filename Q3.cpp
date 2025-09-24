#include <iostream>
using namespace std;

/**
 * Example comment for a function
 * exampleFunction takes in two parameters, an integer and a boolean
 * if the boolean is true, it prints the integer
 * it returns nothing (void)
 */
void exampleFunction(int param1, bool param2)
{
    // this is an example function
    if (param2) {
        cout << "param1 is " << param1 << endl;
    } else {
        cout << "param1 is not printed" << endl;
    }
}

/**
 * HOMEWORK TODO 1: write the comments for the function "secret".
 * 
 * You should describe what the function does, its parameters, and its return value.
 * Use the exampleFunction above as a reference.
 * 
 * 
 */

bool secret(int x, int y, bool z)
{
    /*Takes in two integers and a boolean 
      if either boolean or x > y statement is true or both are true then if statemnent is run (using OR gate logic table)
      it returns true (1)
      if both are false then the return value is 0 */
    if (x > y || z) { 
        return true;
    } else { 
        return false;
    }
}

int main()
{
    // HOMEWORK TODO 2: give the results of each function call

    exampleFunction(5, true);
    // result 1:  is printed param1 is 5

    exampleFunction(10, false);
    // result 2:  is printed param1 is not printed (if statement is false so else statement is run)

    bool result = secret(3, 4, false);
    // result 3: result is false

    result = secret(5, 2, false);
    // result 4: result is 1(int not bool (true))

    result = secret(1, 1, true);
    // result 5: result is 1 

    return 0;
}