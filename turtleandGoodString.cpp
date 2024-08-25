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
        bool turtle=true;
        if(n>=2)
        {
            if(s[0]!=s[n-1])
            {
                turtle=true;
            }
            else
            {
                turtle=false;
            }
        }
        else
        {
            turtle=false;
        }

        if(turtle==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
