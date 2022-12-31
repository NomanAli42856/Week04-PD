#include<iostream>
#include<windows.h>
using namespace std;
void pricefinder(float rr,float wr,float tul);

main()
{
system("cls");
float rr,wr,tul;
  while(true)
  {
    cout << "Enter the number of red roses : ";
    cin >> rr;
    cout << "Enter the number of white roses : ";
    cin >> wr;
    cout << "Enter the number of tulips : ";
    cin >> tul;
    pricefinder(rr,wr,tul);
  }


}



void pricefinder(float rr,float wr,float tul)
{
  float opr,pra;
  opr = (rr*2.00)+(wr*4.10)+(tul*2.50);
  cout << "Original price : " << opr << endl;
  if (opr > 200)
  {
    pra= opr - (opr/5);
    cout << "Price after discount : " << pra << endl;
  }

}