
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int x=0,y=0;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];

             if( a[i][j]==1 && a[2][2]!=1)
            {
                x=abs(2-i);
                y=abs(j-2);

            }

        }
    }
    cout<<x+y<<endl;



}
