
#include<iostream>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;

    v1=(s*v1)+2*t1;
    v2=(s*v2)+2*t2;
    if(v1<v2)
    {
        cout<<"First"<<endl;
    }
    else if(v1>v2)
    {
        cout<<"Second";
    }

    else
    {
        cout<<"Friendship";
    }
}
