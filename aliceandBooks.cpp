#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=v[n-1];
        int mx=-1;
        for(int i=0;i<n-1;i++)
        {
            mx= max(mx,v[i];)
        }
        ans+=mx;
        cout<<ans<<endl;

    }
}
