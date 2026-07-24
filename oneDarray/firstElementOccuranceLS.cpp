#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,5,6};
    int k=2;
    int n=sizeof(a)/sizeof(a[0]);
    int index=linearSearch(a,n,k);
    cout<<"INDEX="<<index;
    return 0;
}