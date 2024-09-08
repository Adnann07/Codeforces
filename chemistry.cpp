#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int c=0;
        for(auto it:mp)
        {
            if(it.second%2!=0) c++;
        }
        if(c-1<0) c=0;
        else c=c-1;

        if(k>=c && k<=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
