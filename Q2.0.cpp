#include <iostream>
using namespace std;

int main() {
    // create a variable speed
    int speed = 0;
    // put your code starting below this line
    while (true){
        cout << "Enter speed : ";
        cin >> speed;
        if (speed > 0){
            cout << "Moving forward" << endl;
        }
        else if (speed == 0){
            cout << "Stopped" << endl;
        }
        else {
            cout << "Moving backward" << endl;
        }
    }
      /**
     * HOMEWORK TODO 2: repeat the following code indefinitely-- while, ending before return 0;
     * i.e. keep reading user input and printing the status
     * You don't need to terminate the program in code,
     * use Ctrl+C to stop the program when you want to.
     */

    // prompts users to enter speed

    /**
     * HOMEWORK TODO 1: if speed is positive, print "Moving forward"
     * if speed is negative, print "Moving backward"
     * if speed is zero, print "Stopped"
     * 
     * You can print the line "Moving forward" by:
     * cout << "Moving forward" << endl;
     */ 


    // your code should end before this line
    return 0;
}
