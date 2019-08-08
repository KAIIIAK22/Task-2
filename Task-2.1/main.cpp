#include <iostream>
#include <set>

using namespace std;

int main()
{
   set<int> SchoolList;
   int a;
   for(int i=0;i<10;i++)
   {
       cout<<"Vvedi nomer kakoi-to shkolu: ";
       cin>>a;
       SchoolList.insert(a);
   }
   cout<<"A teper vvedi svoyu shkolu: ";
   cin>>a;
   if(SchoolList.find(a)!=SchoolList.end())
       cout<<"Ya znayu etu shkolu!"<<endl;
   else
       cout<<"Ya ne znayu etu shkolu!"<<endl;
}