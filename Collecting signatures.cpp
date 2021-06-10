#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,m=0,k=0,l=0;
    cin>>n;
    long long int a[n],b[n],points[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(long long int i=0;i<n-1;i++)
    {
        for(long long int j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                x=b[j];
                b[j]=b[j+1];
                b[j+1]=x;
                y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    points[0]=b[0];
    for(long long int i=1;i<n;i++)
    {
        if(a[i]>b[k])
        {
            ++m;
            k=i;
            ++l;
        }
        points[l]= b[k];
    }
    cout<<m+1<<"\n";
    for(long long int i=0;i<m+1;i++)
        cout<<points[i]<<" ";
    return 0;
}
