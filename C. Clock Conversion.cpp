#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convertTo12HourFormat(string time)
{
    stringstream ss(time);
    int hour, minute;
    char colon;
    ss >> hour >> colon >> minute;

    string period = "AM";
    if (hour >= 12)
    {
        period = "PM";
        if (hour > 12)
            hour -= 12;
    }
    if (hour == 0)
        hour = 12;

    stringstream result;
    result << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period;
    return result.str();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i)
    {
        string time;
        getline(cin, time);
        string twelveHourFormat = convertTo12HourFormat(time);
        cout << twelveHourFormat << endl;
    }

    return 0;
}
