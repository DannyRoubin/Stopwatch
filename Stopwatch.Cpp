// Stopwatch.Cpp

#include <iostream>
#include <windows.h>


using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    system("cls");
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    cout << "stopwatch" << endl;

    int hour = 0;
    int min = 0;
    int sec = 0;

    displayTime(hour, min, sec);


    while (true) {

        Sleep(1000);


        sec++;

        

        if (sec > 59) {
            min++;
            sec = 0;
        }

        if (min > 59) {
            hour++;
            min = 0;
        }

        displayTime(hour, min, sec);
    }
}




