
#include<iostream>
using namespace std;
int main()
{
    int n,k,z;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
       z=n%10;
    if(z!=0)
    {
      n-=1;
    }
    if(z==0)
    {
        n=n/10;
    }
    }
    cout<<n;

}
