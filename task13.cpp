#include<iostream>
#include<windows.h>
using namespace std;
void slpdtr(int hld);

main()
{
system("cls");
int wkd,hld;
  while(true)
  {
    cout << "Enter the holidays : ";
    cin >> hld;
    slpdtr(hld);
  }

}

void slpdtr(int hld)
{
  int mins,wkd,rmn;
  wkd = 365 - hld;
  mins = (63*wkd)+(127*hld);
  rmn = 30000-mins;
  if (mins < 30000)
  {
    cout << "Tom sleeps well." << endl;
    cout << rmn <<" minutes less for play "  << endl;
  }
  if (mins >= 30000)
  {
    cout << "Tom will run away"  << endl;
    cout << rmn <<" minutes for play "  << endl;
  }

}