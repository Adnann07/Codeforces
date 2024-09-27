
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

       vector<int> result;
       for(int i=n-k;i>=1;i--) result.push_back(i);
       for(int i=n-k+1;i<=n;i++) result.push_back(i);
       for(int i=0;i<n;i++)
       {
           cout<<result[i]<<" ";
       }


    }
}
