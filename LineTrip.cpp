#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x;
       cin>>n>>x;
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       int mx=INT_MIN;
       for(int i=1;i<n;i++)
       {
           int diff=v[i]-v[i-1];
           mx=max(mx,diff);
       }
       mx=max(mx,v[0]-0);
       mx=max(mx,2*(x-v[n-1]));
       cout<<mx<<endl;

    }

    }

