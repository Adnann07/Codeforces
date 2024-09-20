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
        int init=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            init=init+(x-(init%x));
        }
        cout<<init<<endl;

    }
}

