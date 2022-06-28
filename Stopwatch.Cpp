// Stopwatch.Cpp

#include <iostream>

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    cout << hours << ":" << minutes << ":" << seconds << endl;
}


int main() {
    cout << "stopwatch" << endl;

    int hour = 0;
    int min = 0;
    int sec = 0;

    displayTime(hour, min, sec);


}