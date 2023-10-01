#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
int redRose;
int whiteRose;
int tulip;
cout << "Red Rose: ";
cin >> redRose;
cout << "White Rose: ";
cin >> whiteRose;
cout  << "Tulips: ";
cin >> tulip;
flowerShop(redRose, whiteRose, tulip);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
float originalPrice;
float discount = 0;
float finalPrice;
originalPrice = redRose*2.00+whiteRose*4.10+tulip*2.50;
discount = originalPrice*0.2;
finalPrice = originalPrice-discount;
if(originalPrice > 200)
{
cout << "Original Price: $" << originalPrice<<endl;
cout << "Price after Discount: $" << finalPrice;
}
else
{
cout << "Original Price: $" << originalPrice <<endl;
cout << "No discount applied.";
}

} 
