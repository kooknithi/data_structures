#include<iostream>
using namespace std;
int linearSearch(int n , int arr[] , int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
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
    cout<<"enter a value to get frequency:\n";
    int key;
    cin>>key;
    int res=linearSearch(n,arr,key);
    if(res==0){
        cout<<"The key element is not found!";
    }
    else{
        cout<<"RESULT :"<<res;
    }
    return 0;
}