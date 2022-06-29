// Stopwatch.Cpp

// Including imports
#include <iostream>
#include <windows.h>

//using the namespace named standard
using namespace std;

// displayTime function meant to format the current time to a readable format for the user 
void displayTime(int hours, int minutes, int seconds) {
    // clears the screen in between prints
    system("cls");
    // print line to format the current time on screen
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

// main function to run the application
int main() {
    // Title name for the application upon starting
    cout << "stopwatch" << endl;

// sets all time values to 0
    int hour = 0;
    int min = 0;
    int sec = 0;

// displays 0 for each value
    displayTime(hour, min, sec);


// while the program is running, increase the counter
    while (true) {

// sleep function uses miliseconds
        Sleep(1000);

// after the program is stopped for a second, increment the second counter
        sec++;

        
// if seconds var is greater than 59, increment the minute counter and reset sec to 0
        if (sec > 59) {
            min++;
            sec = 0;
        }

// if min counter is greater that 59, increment the hour counter and reset min to 0
        if (min > 59) {
            hour++;
            min = 0;
        }

// display the time
        displayTime(hour, min, sec);
    }
}




