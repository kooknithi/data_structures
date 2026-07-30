#include<iostream>
using namespace std;
int first_occurance(int n,int arr[],int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
}
int last_occurance(int n,int arr[],int key)
{
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
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
    cout<<"Enter an element to search:";
    int key;
    cin>>key;
    int first_index=first_occurance(n,arr,key);
    int last_index=last_occurance(n,arr,key);
    int freq=(last_index - first_index ) + 1;
    cout<<"Frequency of "<<key<<" is "<<freq;
    return 0;
}