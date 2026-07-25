#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int l,int r,int k){
    int res=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==k)
        {
            
            res=mid;
            l=mid+1;
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
    int a[]={1,4,4,4,6};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    int i=binarySearch(a,n,0,n-1,k);
    cout<<"Last index of occurance of element"<<k<<"i:"<<i<<endl;
    return 0;
}