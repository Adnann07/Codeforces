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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int avg=a[0];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(avg==a[i])
            {
                c++;
            }


        }
        cout<<n-c<<' '<<endl;
    }

}
