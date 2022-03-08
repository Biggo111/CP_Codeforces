#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int c=0,c2=0,c3=0,c4=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            c++;
        }
        else if(v[i]==2)
        {
            c2++;
        }
        else if(v[i]==3)
        {
            c3++;
        }
        else if(v[i]==4)
        {
            c4++;
        }
    }
    int coun=c4;

    while(c3!=0 && c!=0)
    {
        coun++;
        c3--;
        c--;
    }
    if(c==0 && c3!=0)
    {
        coun+=c3;
        c3=0;
    }
    coun+=c2/2;
    if(c2%2!=0)
    {
        if(c<=2)
        {
            coun++;
            c = 0;
            c2 = 0;
        }
        else
        {
            c-=2;
            c2=0;
            coun++;
        }
    }
    if(c!=0)
    {
        coun+=c/4;
        if(c%4!=0)
        {
            coun++;
        }
    }
    cout<<coun<<endl;
}
