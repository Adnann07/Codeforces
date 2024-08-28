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
        string s1=s.substr(0,3);
        string s2=s.substr(3,6);
        int p=stoi(s1);
        int q=stoi(s2);
        int sum=0;
        int sum2=0;
        while(p!=0)
        {
            sum=sum+p%10;
            p=p/10;
        }
        while(q!=0)
        {
            sum2=sum2+q%10;
            q=q/10;
        }
        if(sum==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }

}
