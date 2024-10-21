#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

      string s;
      cin>>s;
      map<char, long long> mp;
      for(int i=0;i<n;i++)
      {
          mp[s[i]]++;

      }
      string cmp="ABCDEFG";
      long long ans=0;
      for(auto x:cmp)
      {
          if(mp[x]<m)
          {
              ans=ans+(m-mp[x]);
          }
      }
      cout<<ans<<endl;

}
}
