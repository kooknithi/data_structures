// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=a[i];
//     }
//     cout<<"SUM = "<<sum;
//     return 0;
// }



//max element
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int max=a[0];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }

//count even numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         {
//             count++;
//         }
//     }
//     cout<<"EVEN NUMBERS ARE :"<<count<<endl;
//     return 0;
// }

//pairs with sum
// #include<iostream>
// using namespace std;
// int main()
// {
//      int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int k;
//     cin>>k;
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]+a[j]==k){
//                count++;
//             }
//         }
//     }
//     cout<<"The sum of pairs = "<<count;
//     return 0;
// }

// array reversal part-01
// #include<iostream>
// using namespace std;
// int main()
// {
//       int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int b[n];
//     for(int i=n-1;i>=0;i--)
//     {
//         b[i]=a[i];
//     }
//     cout<<"Reversed Array :";
//     for(int i=0;i<n;i++)
//     {
//         cout<<" "<<b[i];
//     }
//     return 0;
// }

//Reverse an array part-2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int f=0;
//     int l=n-1;
//     while(f<l)
//     {
//         int temp=a[l];
//         a[l]=a[f];
//         a[f]=temp;
//         f++;
//         l--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//2D array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int r,c;
//     cin>>r>>c;
//     int a[r][c];
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     //matrix addition
//     int sum=0;
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             sum+=a[i][j];
//         }
//     }
//     // for(int i=0;i<r;i++)
//     // {
//     //     for(int j=0;j<c;j++)
//     //     {
//     //         cout<<a[i][j]<<" ";
//     //     }
//     //     cout<<"\n";
//     // }
//     cout<<"SUM ="<<sum;
//     return 0;
// }

//first index element occurance(linear search)
// #include<iostream>
// using namespace std;
// int linearSearch(int a[],int n,int k)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==k)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int a[]={1,2,3,5,6};
//     int k=2;
//     int n=sizeof(a)/sizeof(a[0]);
//     int index=linearSearch(a,n,k);
//     cout<<"INDEX="<<index;
//     return 0;
// }

//binery search to using in forward problem
// #include<iostream>
// using namespace std;
// int binarySearch(int a[],int l,int r,int k)
// {
//     int res=-1;
//     if(l>r)
//     {
//         return -1;
//     }
    
//     while(l<=r)
//     {
//         int mid=l+(r-l)/2;
//         if(a[mid]==k)
//         {
//             res=mid;
//             r=mid-1;
//         }
//         else if(a[mid]>k)
//         {
//             r=mid-1;
//         }
//         else
//         {
//             l=mid+1;
//         }
//     }
//     return res;
    
// }
// int main()
// {
//     int a[]={1,2,2,5,5,1,6};
//     int k=2;
//     int n=sizeof(a)/sizeof(a[0]);
//     int index=binarySearch(a,0,n-1,k);
//     cout<<"INDEX="<<index;
//     return 0;
// }

//last index of occurance of an element(binary)
// #include<iostream>
// using namespace std;
// int binarySearch(int a[],int n,int l,int r,int k){
//     int res=-1;
//     while(l<=r)
//     {
//         int mid=l+(r-l)/2;
//         if(a[mid]==k)
//         {
            
//             res=mid;
//             l=mid+1;
//         }
//          else if(a[mid]>k)
//         {
//             r=mid-1;
//         }
//         else
//         {
//             l=mid+1;
//         }
//     }
//     return res;
// }
// int main()
// {
//     int a[]={1,4,4,4,6};
//     int k=4;
//     int n=sizeof(a)/sizeof(a[0]);
//     int i=binarySearch(a,n,0,n-1,k);
//     cout<<"Last index of occurance of element"<<k<<"i:"<<i<<endl;
//     return 0;
// }


//count frequency-01
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