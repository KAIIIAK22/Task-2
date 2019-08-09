#include <iostream>

using namespace std;

int main()
{
    unsigned int arr[20];
    short i;
    unsigned int bigest = 0;
    for(i=0;i<20;i++)
    {
        cin>>arr[i];
        if (arr[i] == 0)
            break;
        if ((arr[i]&1)!=1)
        {
            cout<<"Not correct value!!!"<<endl;
            i-=1;
            continue;
        }
        if (arr[i]>bigest)
            bigest=arr[i];
   }
   char pole[bigest+2];
   for (int b=0;b<i;b++)
   {
       for (int c = 0;c<((bigest+2-arr[b])/2);c++) cout<<" ";
       for (int c = 0;c<(arr[b]);c++) cout<<"*";
       cout<<endl;
   }
}
