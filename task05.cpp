#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int);

main()
{
system("cls");
gotoxy(70,20);
cout << "My name is Noman Ali.";
}



void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}