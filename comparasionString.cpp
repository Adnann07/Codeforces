

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
        string s;
        cin>>s;
        int ans=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            c++;
            if(i==n-1 || s[i+1]!=s[i])
            {
                ans=max(ans,c);
                c=0;
            }
        }
        cout<<(ans+1)<<endl;


    }
}
