#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string s2;
    cin>>s;
    cin>>s2;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s==s2)
    {
        cout<<0;
    }
    if(s>s2)
    {
        cout<<1;
    }
    if(s<s2)
    {
        cout<<-1;
    }

}
