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
        map<int, int>rowCount;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                char cell;
                cin>>cell;
                if(cell=='1')
                {
                    c++;
                }

            }
            if(c>0) rowCount[c]++;
        }
        if(rowCount.size()>1) cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }
}
