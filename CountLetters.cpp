#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        int c=1;


        while (s[i] == s[i + 1]) {
            c++;
            i++;
        }

        cout<<s[i]<<" : "<<c<<endl;

    }

}
