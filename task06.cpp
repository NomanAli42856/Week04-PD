#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int);
void printA();
void prinW();
void printI();
void printS();

main()
{
  system("cls");
  gotoxy(0,0);
  printA();
  gotoxy(0,10);
  prinW();
  gotoxy(0,20);
  printA();  
  gotoxy(0,30);
  printI();
  gotoxy(0,40);
  printS();

}


void printA()
{
cout <<   "           *****       "      << endl;
cout <<   "           *****       "      << endl;
cout <<   "          **   **       "    << endl;
cout <<   "         **     **       "  << endl;
cout <<   "        **       **       "  << endl;
cout <<   "       *************       "  << endl;
cout <<   "      ***************       "  << endl;
cout <<   "     **             **    "     << endl;
cout <<   "    **               **    "     << endl;
}

void prinW()
{
cout << "  ***        ***        ***  "<< endl;
cout << "  ***       *****       ***  "<< endl;
cout << "  ***      **   **      ***  "<< endl;
cout << "  ***     **     **     ***  "<< endl;
cout << "  ***    **       **    ***  "<< endl;
cout << "  ***   **         **   ***  "<< endl;
cout << "  ***  **           **  ***  "<< endl;
cout << "  *** **             ** ***  "<< endl;
cout << "  *****               *****  "<< endl;

}

void printI()
{
cout << "  ***    "<< endl;
cout << "  *** "<< endl;
cout << "  ***   "<< endl;
cout << "  ***    "<< endl;
cout << "  ***   "<< endl;
cout << "  ***   "<< endl;
cout << "  ***  "<< endl;
cout << "  *** "<< endl;
cout << "  *** "<< endl;
}

void printS()
{
cout << "         *****    "<< endl;
cout << "       ***  ***"<< endl;
cout << "      ***   ***"<< endl;
cout << "      ***    "<< endl;
cout << "       ***   "<< endl;
cout << "        ***   "<< endl;
cout << "          ***  "<< endl;
cout << "           *** "<< endl;
cout << "    ***   *** "<< endl;
cout << "    ***  *** "<< endl;
cout << "     ***** "<< endl;
}

void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
