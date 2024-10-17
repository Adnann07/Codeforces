
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


      if(n==2)
      {

          int diff=abs(a[1]-a[0]);

          if(diff>=2)
          {
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
}
