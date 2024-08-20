#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    bool all_upper=true;
    bool all_but_firstupper=true;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            all_upper=false;
        }
        if(i>0 && s[i]>='a' && s[i]<='z')
        {
            all_but_firstupper=false;
        }
    }
    if(all_upper || all_but_firstupper)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
            else
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
}
