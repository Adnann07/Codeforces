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
        long long int score=0;

        vector<int> a(2*n);

        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];

        }
        sort(a.begin(),a.end());

        for(int i=0;i<2*n;i+=2)
        {
            score+=a[i];
        }
        cout<<score<<endl;


    }
}
