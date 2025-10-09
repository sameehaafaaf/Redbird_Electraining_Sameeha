/*
Give your answer to part 1 here.

a.
This one is given to you as an example.

#include <iostream>
using namespace std;
int main() {
    char inp[8];
    cin >> inp;
    cout << inp << endl;
    return 0;
}

Runtime error.
The code declares an array of size 8 to hold a string input.
If the user inputs a string longer than 7 characters (plus the null terminator),
it will cause a buffer overflow, leading to a runtime error.

b.

int main() {
    int a = "hello" / "world";
    return 0;
}
Compiler error
The code is trying to assigns the value of two strings divided to a, 
but dividing two strings produces a compiler error.

c.

#include <iostream>
using namespace std;
int main()
{
    int myNum = 5;
    if (myNum < 10)
    {
        cout << "myNum is greater than 10" << endl;
    }
    else
    {
        cout << "myNum is 10 or less" << endl;
    }
}

Logical error.
The statement printed out when myNum is less than ten 
is "myNum is greater than ten" when it should be the opposite.

d.

int main()
{
    int a = 4;
    int b = 0;
    int c = a / b;
}

RunTime error
The division of any number by zero causes a runtime error as 
variables are detected as the code is running and it is not possible 
to divide a number by zero, if it was "int c = 4/0" then it would be a complier error.

Your answers to parts b, c, and d should end before this line.
*/

/*
Part 2:
Explain the what the following code is trying to do.
Find the bug making the results wrong
Document why and how it happens.
Write a simple fix for it.


What is the code trying to do?
Print out much percentage a is of b

What is the bug?
Both a and b are integers and when divided they only give 0

Why and how does it happen?
When two integers are divided then the resutl is also in an 
integer form which means it ignores anything after the decimal point, 
this means we get 0*100 and not 0.75*100

How to fix it?
We just have to make a and b both as a double or float, 
both allow us to give values after the decimal place.
*/

#include <iostream>
using namespace std;
int main()
{
    double a = 3;
    double b = 4;
    int percent = (a / b) * 100;
    cout << percent << "%" << endl;
    return 0;  // returning 0 for main() just means the program ended successfully
}
