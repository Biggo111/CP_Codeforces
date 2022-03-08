#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,coun=0;
    cin>>n;
    string st;
    while(n--)
    {
        cin>>st;
        if(st[1]=='+')coun++;
        else coun--;
    }
    cout<<coun<<endl;
}
