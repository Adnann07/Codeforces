#include<bits/stdc++.h>
using namespace std;
void find(int n)
{
    for(int i=1;i<=26;i++)
    {
        for(int j=1;j<=26;j++)
        {
            int k=n-i-j;
            if(k>=1 &&  k<=26)
            {
                char first='a'+(i-1);
                char second='a'+(j-1);
                char third='a'+(k-1);
                cout<<first<<second<<third<<endl;
                return;
            }
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        find(n);

    }
}

