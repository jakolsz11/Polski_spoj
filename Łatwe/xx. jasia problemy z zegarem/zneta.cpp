#include <iostream>

using namespace std;

int count_clock_matches(string start_time, string end_time) {
    int count = 0;
    int start_hour = stoi(start_time.substr(0, 2));
    int end_hour = stoi(end_time.substr(0, 2));
    int start_minute = stoi(start_time.substr(3, 2));
    int end_minute = stoi(end_time.substr(3, 2));

    if (start_hour == 0) start_hour = 24;  // poprawka dla przypadku 00:00
    if (end_hour == 0) end_hour = 24;  // poprawka dla przypadku 23:59

    for (int hour = start_hour; hour <= end_hour && hour <= 23; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            int hour_angle = ((hour % 12) * 30 + minute / 2) % 360;  // poprawka dla przypadku 00:00
            int minute_angle = minute * 6;
            if (hour_angle == minute_angle) {
                if ((hour == start_hour && minute >= start_minute) || hour > start_hour) {
                    if ((hour == end_hour && minute <= end_minute) || hour < end_hour) {
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    string start_time, end_time;
    cout << "Podaj godzinę początkową (format HH:MM): ";
    cin >> start_time;
    cout << "Podaj godzinę końcową (format HH:MM): ";
    cin >> end_time;

    int matches = count_clock_matches(start_time, end_time);
    cout << "Ilość pokryć wskazówek zegara w podanym przedziale to: " << matches << endl;

    return 0;
}