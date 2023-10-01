#include<iostream>
using namespace std;
void possibleBonus(int position1, int position2);
main()
{
int position1;
int position2;
cout << "Enter your position: ";
cin >> position1;
cout << "Enter your friend's position: ";
cin >> position2;
possibleBonus(position1, position2);
}
void possibleBonus(int position1, int position2)
{
int condition;
condition = position2 - position1;
if(condition < 6)
{
cout << "true" ;
}
else
{
cout << "false";
}

}