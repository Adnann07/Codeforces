
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
        string s[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

        }

        int ans=0,ans1=0;
        int X=-1,Y=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='R')
                {
                   X=i;
                   Y=j;
                   ans=1;
                   break;
                }
            }
              if(X!=-1)
            {
                break;
            }
        }


            for(int i=0;i<n;i++)
            {
                for(int j=0;j<Y;j++)
                {
                    if(s[i][j]=='R')
                    {
                        ans1=1;
                        break;
                    }
                }
            }


            for(int i=0;i<X;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(s[i][j]=='R')
                    {
                        ans1=1;
                        break;
                    }
                }
            }

            if(ans==0||ans1==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
    }
}
