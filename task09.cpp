#include<iostream>
#include<windows.h>
using namespace std;
void TFconverter(string statm);

main()
{
system("cls");
string statm;
  while(true)
  {
    cout << "Enter the string : ";
    cin >> statm;
    TFconverter(statm);
  }


}



void TFconverter(string statm)
{
  if (statm=="true")
  {
    cout << "False" << endl;
  }

  if (statm=="false")
  {
    cout << "True" << endl;
  }

}