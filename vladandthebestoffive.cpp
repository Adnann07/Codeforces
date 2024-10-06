
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') c++;
        else d++;
        }
        if(c>d) cout<<"A"<<endl;
        else cout<<"B"<<endl;


    }
}
