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
        int c1=0;
        int c2=0;
        int c3=0;
        int c4=0;
        int c5=0;
        int x1=0;
        int x2=0;
        int x3=0;
        int x4=0;
        for(int i=0;i<s.length();i++)
        {

            if(s[i]=='A')
            {
                c1++;
                if(c1<=n)
                {
                    x1++;
                }

            }
            if(s[i]=='B')
            {
                c2++;
                if(c2<=n)
                {
                    x2++;
                }
            }
            if(s[i]=='C')
            {
                c3++;
                if(c3<=n)
                {
                    x3++;
                }
            }
            if(s[i]=='D')
            {
                c4++;
                if(c4<=n)
                {
                    x4++;
                }
            }
            if(s[i]=='?')
            {
                c5+=0;
            }

        }
        cout<<x1+x2+x3+x4<<endl;


    }
}
