#include<iostream>
using namespace std;
void tpChecker(int people, int rolls);
main(){
int people;
int rolls;
cout << "Number of people in the household: ";
cin >> people;
cout << "Number of rolls of TP: ";
cin >> rolls;
tpChecker(people, rolls);
}
void tpChecker(int people, int rolls)
{
int sheets;
sheets = people*57;
int days;
days = rolls*500/sheets;
if(days >= 14)
{
cout << "Your TP will last "<<days<< " days, no need to panic!";
}
if(days < 14)
{
cout << "Your TP will only last "<<days<< " days, buy more!";
}

}

