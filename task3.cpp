#include<iostream>
using namespace std;
void AirlineCompany(string countryName, float ticketPrice);
main()
{
string countryName;
float ticketPrice;
cout << "Enter the country's name: ";
cin >> countryName;
cout << "Enter the ticket price in dollars: $";
cin >> ticketPrice;
AirlineCompany(countryName, ticketPrice);
}
void AirlineCompany(string countryName, float ticketPrice)
{
float discount = 0;
float finalPrice;
if(countryName == "Pakistan")
{
discount = ticketPrice*0.05;
finalPrice = ticketPrice-discount;
cout << "Final ticket price after discount: $" <<finalPrice;
}
if(countryName == "Ireland")
{
discount = ticketPrice*0.1;
finalPrice = ticketPrice-discount;
cout << "Final ticket price after discount: $" <<finalPrice;
}
if(countryName == "India")
{
discount = ticketPrice*0.2;
finalPrice = ticketPrice-discount;
cout << "Final ticket price after discount: $" <<finalPrice;
}
if(countryName == "England")
{
discount = ticketPrice*0.3;
finalPrice = ticketPrice-discount;
cout << "Final ticket price after discount: $" <<finalPrice;
}
if(countryName == "Canada")
{
discount = ticketPrice*0.45;
finalPrice = ticketPrice-discount;
cout << "Final ticket price after discount: $" <<finalPrice;
}
}


