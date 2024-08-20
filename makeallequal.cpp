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
        int z;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }

       int maxc=0;

       int element;
       for(int i=0;i<n;i++)
        {
            int c=0;

            for(int j=0;j<n;j++)
            {
                if(a[j]==a[i])
                {
                    c++;
                }
            }
            if(c>maxc)
            {
                maxc=c;
                element=a[i];
            }

        }
        int  x=0;
        for(int i=0;i<n;i++)
        {
            if(element!=a[i])
            {
               x++;
            }
        }

        cout<<x<<endl;





    }

}
