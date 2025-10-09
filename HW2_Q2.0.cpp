/*
1.
line 29, while (repeat = true)
issue:
The '=' does not mean equal to, it only assaigns a value
fix:
while(repeat==true)

2.
line 35, repeat == false;
issue:
The '==' is used for equating so we need to use '='
fix:
repeat = false

3.
line 39, int delta = inp - a;
issue:
int delta creates a new variable but there is an already existing variable called 
delta so the new variable is shadowed by the other one.
fix:
we can remove the int and assign the value of inp-a to delta (delta = inp-a)

*/
#include <iostream>
using namespace std;
int main()
{
    int inp = 0;
    int a = 3;
    int delta = 0;
    bool repeat = true;
    while (repeat = true)
    {
        cin >> inp;

        if (inp == -1)
        {
            repeat == false;
        }
        else
        {
            delta = inp - a;
            cout << "Delta: " << delta << ". Enter -1 to exit.\n";
        }
    }

    cout << "Final Delta: " << delta << endl;
    return 0;
}
