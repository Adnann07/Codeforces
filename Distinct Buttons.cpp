
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
        int r=0,u=0,l=0,d=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x>0) r++;
            if(y>0) u++;
            if(x<0) l++;
            if(y<0) d++;
        }
        if(r>0 && u>0 && l>0 && d>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
}
