#include<iostream>
#include<windows.h>
using namespace std;
void equalitychecker(int x, int y);

main()
{
system("cls");
int x;
int y;
  while(true)
  {
    cout << "Enter first integer : ";
    cin >> x;
    cout << "Enter second integer : ";
    cin >> y;
    equalitychecker(x,y);
  }


}



void equalitychecker(int x , int y)
{
  if (x==y)
  {
    cout << "True" << endl;
  }

  if (x!=y)
  {
    cout << "False" << endl;
  }

}