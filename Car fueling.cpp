// car fueling problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d,m,n,f=0,j=0,i=1,z=1,y=-1;
    cin>>d>>m>>n;
    long long int arr[n+2];
    for(int i=1;i<n+1;i++)
        cin>>arr[i];
    arr[0]=0;
    arr[n+1]=d;
    for(int k=0;k<n+2;k++)
    {
        if((arr[k]-arr[k-1])>m)
        {
            z=0;
            break;
        }
    }
    if(z==0)
        cout<<y;
    else
    {
        while(i<=n+1)
        {
            while(arr[i]-arr[j]<=m && i<=n+1)
                ++i;
            f=f+1;
            j=i-1;
        }
        cout<<f-1;
    }
    return 0;
}
