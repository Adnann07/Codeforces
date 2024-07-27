#include<iostream>
using namespace std;
int main()
{

int t;
cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long position;
        long long pairs=k/2;



        if(k%2==0)
        {
           position=pairs*(a-b);
        }
        else
        {
            position=pairs*(a-b)+a;
        }

    cout<<position<<endl;
    }

}
