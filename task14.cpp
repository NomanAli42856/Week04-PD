#include<iostream>
#include<windows.h>
using namespace std;
void calculateAggregate(string name, float mat, float inter, float ecat);
void compareMarks(string name,float ecat,string name1,float ecat1);
void printMenu();

main()
{
system("cls");
printMenu();

string name,name1;
float mat,inter,ecat;
float mat1,inter1,ecat1;
    cout << "Enter the name of student : ";
    cin >> name;
    cout << "Enter the matric marks : ";
    cin >> mat;
    cout << "Enter the intermediate marks : ";
    cin >> inter;
    cout << "Enter the ECAT marks : ";
    cin >> ecat;
    
    calculateAggregate(name,mat,inter,ecat);
    
    cout << "Enter the name of student : ";
    cin >> name1;
    cout << "Enter the matric marks : ";
    cin >> mat1;
    cout << "Enter the intermediate marks : ";
    cin >> inter1;
    cout << "Enter the ECAT marks : ";
    cin >> ecat1;
    calculateAggregate(name1,mat1,inter1,ecat1);
    compareMarks(name,ecat,name1,ecat1);
}

void calculateAggregate(string name,float mat,float inter,float ecat)
{
  float matPer,interPer,ecatPer,aggregate;
  matPer = mat/11;
  interPer = inter/5.5;
  ecatPer = ecat/4;
  aggregate = (matPer*0.3)+(interPer*0.3)+(ecatPer*0.4);
  cout << "Aggregate of the " << name << " = " << aggregate << endl;
  float matPer1,interPer1,ecatPer1,aggregate1;
}

void printMenu()
{
cout << "#########################################################" << endl;
cout << "#                                                       #" << endl;
cout << "#                                                       #" << endl;
cout << "#       University of Engineering and Technology        #" << endl;
cout << "#                       Lahore                          #" << endl;
cout << "#                                                       #" << endl;
cout << "#                                                       #" << endl;
cout << "#########################################################" << endl;

}

void compareMarks(string name,float ecat,string name1,float ecat1)
{
    if (ecat > ecat1)
    {
       cout << "Arrangement :" << endl;
       cout << name << endl;
       cout << name1;
    }
    if (ecat1 > ecat)
    {
       cout << "Arrangement :" << endl;
       cout << name1 << endl;
       cout << name;
    }
}