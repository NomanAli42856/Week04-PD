#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int);
void maze();
void playermove(int , int);

main()
{
system("cls");
maze();
playermove(3,3);
}



void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playermove(int x , int y)
{
  gotoxy(x-1,y);
  cout << " ";
  gotoxy(x,y);
  cout << "P";
  Sleep(200);
}

void maze()
{
cout << "################################################################" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "#                                                              #" << endl;
cout << "################################################################" << endl;
}