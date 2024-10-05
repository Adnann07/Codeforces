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
        vector<int> a(n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        int first=-1,last=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(first==-1) first=i;
                last=i;
            }

        }
        for(int i=first;i<=last;i++)
        {
            if(a[i]==0) c++;
        }
        cout<<c<<endl;


    }
}

