
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;


        long long c1=(long long) sqrt(n);
        long long c2=(long long) cbrt(n);

        long long c3=(long long) pow(n,1.0/6);

        cout<<(c1+c2-c3)<<endl;
    }

}
