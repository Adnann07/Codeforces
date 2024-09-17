
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if(s[a]!='-')
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(i!=a && !isdigit(s[i]))

        {
            cout<<"No"<<endl;
            return 0;
        }

    }
    cout<<"Yes"<<endl;
    return 0;


}
