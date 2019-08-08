#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int a[2];
    for(a[0]=0;a[0]<10;a[0]++)
        arr[a[0]]=0;
    while(1)
    {
        cout<<"Vvedi nomer kartochki: ";
        cin>>a[0];
        cout<<"Skolko polozhit: ";
        cin>>a[1];
        arr[a[0]-1]=arr[a[0]-1]+a[1];
        for(a[0]=0;a[0]<10;a[0]++)
            cout<<arr[a[0]] <<" ";
        cout<<endl;
    }
}
