#include<iostream>
#include<windows.h>
using namespace std;
void challan(int spd);

main()
{
system("cls");
int spd;
  while(true)
  {
    cout << "Enter the speed : ";
    cin >> spd;
    challan(spd);
  }


}



void challan(int spd)
{
  if (spd > 100)
  {
    cout << "Halt.... YOU WILL BE CHALLENGED!!!" << endl;
  }

  if (spd <= 100)
  {
    cout << "Perfect! You're going good" << endl;
  }

}