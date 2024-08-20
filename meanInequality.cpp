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
        int a[2*n];
        n*=2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

         sort(a,a+n);
         int i=0;
         int j=n-1;
         int c=0;

         while(i<=j)
         {
             if(c%2==0)
             {
                 cout<<a[j]<<" ";
                 j--;
             }
             else
             {
                 cout<<a[i]<<" ";
                 i++;
             }
             c++;
         }
         cout<<endl;



    }
}
