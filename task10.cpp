#include<iostream>
#include<windows.h>
using namespace std;
void discount(string statm, int pr);

main()
{
system("cls");
string statm;
int pr;
  while(true)
  {
    cout << "Enter the country name : ";
    cin >> statm;
    cout << "Enter the price of ticket : ";
    cin >> pr;
    discount(statm, pr);
  }


}



void discount(string statm, int pr)
{
  if (statm=="pakistan")
  {
     pr = pr - (pr/20);
     cout << "Final price after discount = "<< pr << endl;
  }

  if (statm=="ireland")
  {
     pr = pr - (pr/10);
     cout << "Final price after discount = "<< pr << endl;
  }

  if (statm=="india")
  {
     pr = pr - (pr/5);
     cout << "Final price after discount = "<< pr << endl;
  }

  if (statm=="england")
  {
     pr = pr - (pr/3.333);
     cout << "Final price after discount = "<< pr << endl;
  }

  if (statm=="canda")
  {
     pr = pr - (pr/2.222);
     cout << "Final price after discount = "<< pr << endl;
  }

}