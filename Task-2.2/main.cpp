#include <iostream>

using namespace std;

int main()
{
    int arr[12];
    for(arr[10]=0;arr[10]<10;arr[10]++)
        arr[arr[10]]=0;
    while(1)
    {
        cout<<"Vvedi nomer kartochki: ";
        cin>>arr[10];
        cout<<"Skolko polozhit: ";
        cin>>arr[11];
        arr[arr[10]-1]=arr[arr[10]-1]+arr[11];
        for(arr[10]=0;arr[10]<10;arr[10]++)
            cout<<arr[arr[10]] <<" ";
        cout<<endl;
    }
}
