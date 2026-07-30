#include<iostream>
using namespace std;
int binarySearch(int a[],int l,int r,int k)
{
    int res=-1;
    if(l>r)
    {
        return -1;
    }
    
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==k)
        {
            res=mid;
            r=mid-1;
        }
        else if(a[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return res;
    
}
int main()
{
    int a[]={1,2,2,5,5,1,6};
    int k=2;
    int n=sizeof(a)/sizeof(a[0]);
    int index=binarySearch(a,0,n-1,k);
    cout<<"INDEX="<<index;
    return 0;
}