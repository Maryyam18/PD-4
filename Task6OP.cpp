#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int main()
{
system("cls");

gotoxy(7,9);
cout << "H";
gotoxy(7,10);
cout << "A";
gotoxy(7,11);
cout << "S";
gotoxy(7,12);
cout << "S";
gotoxy(7,13);
cout << "A";
gotoxy(7,14);
cout << "N";

return 0;
}