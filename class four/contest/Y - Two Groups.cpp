#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
       ll sum=0, sum2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>=0)sum+=a[i];
            else sum2 += a[i];
        }
        cout<<abs(sum2+sum)<<'\n';
    }
}

