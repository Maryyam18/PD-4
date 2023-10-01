#include<iostream>
using namespace std;
void IsEqual(int number1, int number2);
main()
{
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
IsEqual(number1, number2);
}
void IsEqual(int number1, int number2)
{
if(number1 == number2)
{
cout << "true";
}
else
{
cout << "false";
}

}