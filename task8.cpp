#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout << "Holidays: ";
cin >> holidays;
pet(holidays);
}
void pet(int holidays)
{
int workingDays;
float minutesPerDay;
int hours;
int minutes;
int difference;
workingDays = 365 - holidays;
minutesPerDay = (workingDays*63)+(holidays*127);
difference = (30000 - minutesPerDay);
hours = difference/60;
minutes = (difference%60);
if(minutesPerDay <= 30000)
{
cout << "Tom sleeps well" << endl;
cout << hours << " hours and " << minutes << " minutes less for play";
}
if(minutesPerDay > 30000)
{
cout << "Tom will run away" << endl;
cout << -1*hours << " hours and " << -1*minutes << " minutes for play";
}

}

