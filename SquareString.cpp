
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        string s1="",s2="";
        cin>>s;
        for(int i=0;i<s.length()/2;i++)
        {
            s1+=s[i];
        }
        for(int i=s.length()/2;i<s.length();i++)
        {
            s2+=s[i];
        }
         if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }



}
