#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    int l=n-1;
    while(f<l)
    {
        int temp=a[l];
        a[l]=a[f];
        a[f]=temp;
        f++;
        l--;
    }
    cout<<"REVERSED ARRAY ARE :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}