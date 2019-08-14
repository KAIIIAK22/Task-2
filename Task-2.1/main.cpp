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
   for(int i=0;i<10;i++)
   {
      if(a==SchoolList[i])
      {
          cout<<"Ya znayu etu shkolu!"<<endl;
           i=10; // -_-
      }
      if (i==9) cout<<"Ya ne znayu etu shkolu!"<<endl;
   }
}
