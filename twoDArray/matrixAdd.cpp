#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    //matrix addition
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<"SUM ="<<sum;
    return 0;
}