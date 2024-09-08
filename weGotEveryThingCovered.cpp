
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       char ch='a';
       string s;
       for(int i=0;i<k;i++)
       {
           s+=ch;
           ch++;
       }
       string s2;
       for(int i=0;i<n;i++)
       {
           s2+=s;
       }
       cout<<s2<<endl;


    }


}
