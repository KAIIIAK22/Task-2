#include <iostream>

using namespace std;

int main()
{
   int SchoolList[10];
   int a;
   for(int i=0;i<10;i++)
   {
       cout<<"Vvedi nomer kakoi-to shkolu: ";
       cin>>SchoolList[i];
   }
   cout<<"A teper vvedi svoyu shkolu: ";
   cin>>a;
   for(int i=0;i<=10;i++)
   {
	  
      if((a==SchoolList[i])&&(i<10))
      {
          cout<<"Ya znayu etu shkolu!"<<endl;
           i=11; // -_-
      }
      if (i==10) cout<<"Ya ne znayu etu shkolu!"<<endl;
   }
}
