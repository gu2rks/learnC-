#include <iostream>

using namespace std;

int main()
{
    int hours, min, sec;
    cout << "Gimme hours: ";
    cin >> hours;
    cout << "Gimme minutes: ";
    cin >> min;
    cout << "Gimme seconds: ";
    cin >> sec;
    int total = (hours*3600) + (min*60) + sec;
    cout << hours << " hour, " << min
    << " minutes and " << sec << " seconds is qual to " << total
    << " seconds \n";
}
