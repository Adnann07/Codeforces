
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
        int n=s.size();
        string s1="";
        string s2="";
        s1.push_back('(');
        while(s1.size()<2*n)
        {
            if(s1.back()=='(') s1.push_back(')');
            else s1.push_back('(');
        }
        while(s2.size()<n) s2.push_back('(');
        while(s2.size()<2*n) s2.push_back(')');

        if(s1.find(s)==string::npos)
        {
            cout<<"YES\n"<<s1<<"\n";
        }
        else if(s2.find(s)==string::npos)
        {
            cout<<"YES\n"<<s2<<"\n";
        }
        else cout<<"NO"<<endl;
    }
}
