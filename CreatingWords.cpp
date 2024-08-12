#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        string temp;
        cin>>a>>b;


        temp[0]=a[0];
        a[0]=b[0];
        b[0]=temp[0];
        cout<<a<<" "<<b<<endl;
    }

}
