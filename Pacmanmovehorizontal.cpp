#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int);
void maze();
void playermove(int x, int y);

main()
{
system("cls");
maze();
int x = 8;
int y = 8;
while(true)
{
  playermove(x,y);
  if (x<24)
  {
    x=x+1;
  }
  if (x==24)
  {
    gotoxy(x-1,y);
    cout << " ";
    x=8;
  }
}

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
cout << "   ############################################################################## "<< endl; 
cout << "   ||..    ....................................................    .........   || "<< endl;
cout << "   ||..    %%%%%%%%%%%%%%%%          ...     %%%%%%%%%    |%|..    %%%%%%%%%   ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      ..        %%%%%.  ||"<< endl;
cout << "   ||..           |%|           ..|%|...    ...........   |%|..             .  ||"<< endl;
cout << "   ||..           %%%%%%%%%%    ..|%|...    %%%%%%%%      |%|..        %%%%%.  ||"<< endl;
cout << "   ||..                  |%|.           |%|......         |%|..          |%|.  ||"<< endl;
cout << "   ||..         ........ |%|.           |%|....|%|           ..          |%|.  ||"<< endl;
cout << "   ||..|%| |%|%%|%|.|%|. |%|. |%|          ....|%|           ..|%|       |%|.  ||"<< endl;
cout << "   ||..|%| |%|  |%|.|%|..     %%%%%%%%%%   ....|%|           ..|%|       |%|.  ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      ..        %%%%%.  ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      ..        %%%%%.  ||"<< endl;
cout << "   ||..         ........ |%|. G       |%|....|%|           ..            |%|.  ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      ..        %%%%%.  ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ############################################################################## "<< endl;
}