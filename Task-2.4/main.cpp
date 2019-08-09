#include <iostream>

using namespace std;

int main()
{
    unsigned short arr[5];
    unsigned short maxi = 0;
    for (int i=1; i<=5;i++)
    {
        cout<<"Zvezdochek v "<< i<<"-om stolbike: ";
        cin>>arr[i-1];
        if (arr[i-1]>maxi)
            maxi=arr[i-1];
    }
    for  (int i =0;i<maxi;i++)
    {
        for  (int c =0;c<5;c++)
        i<arr[c]?cout<<"*":cout<<" ";
        cout<<endl;
    }
}
