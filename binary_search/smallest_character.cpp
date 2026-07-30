//smallest character among other characters in an array
#include<iostream>
using namespace std;
int solve_bs(int n,int a[n],int k)
{
    int l=0;
    int r=n-1;
    int res= -1;
    while(l<=r)
    {
        int mid=l+(r-l)/2; 
        if(a[mid] == k)
        {
            l=mid+1;
        }
        else if(a[mid]>k)
        {
            res=a[mid];
            r=mid-1;
        }
        else
        {

        }
    }
    if(res== -1)
    {
        return -1;
    }
    return a[res];
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a value to get smallest of greatest element:\n";
    int key;
    cin>>key;
    int val = solve_bs(n,a,k);
    cout<<"the samllest element greater than "<<k<<" is "<< val;
    return 0;
}