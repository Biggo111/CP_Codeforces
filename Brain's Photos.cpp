#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n>>m;
    char ch[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ch[i][j]=='C' || ch[i][j]=='Y' || ch[i][j]=='M')
            {
                k = 1;
                break;
            }
        }
    }
    if(k==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }
}
