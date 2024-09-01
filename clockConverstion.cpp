
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h;
        cin>>h;
        string s;
        cin>>s;

        if(h==0)
        {
            cout<<12<<s<<" "<<" AM"<<endl;
        }
        else if(h<=11)
        {
            if(h<10)
            {
                cout<<0<<h;
            }
            else
            {
                cout<<h;
            }
            cout<<s<<" AM"<<endl;
        }
        else if(h==12)
        {
            cout<<12<<s<<" PM"<<endl;
        }
        else if(h>12)
        {
            if(h-12<10) cout<<0<<h-12;
            else
        {
            cout<<h-12;
        }
        cout<<s<<" PM"<<endl;
        }


    }
}
