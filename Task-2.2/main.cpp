#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int a0,a1
    for(a0=0;a0<10;a0++)
        arr[a0]=0;
    while(1)
    {
        cout<<"Vvedi nomer kartochki: ";
        cin>>a0;
        cout<<"Skolko polozhit: ";
        cin>>a1;
        arr[a0-1]=arr[a0-1]+a1;
        for(a0=0;a0<10;a0++)
            cout<<arr[a0] <<" ";
        cout<<endl;
    }
}
