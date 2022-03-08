#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2,st3;
    int flag;
    cin>>st>>st2>>st3;
    string st4 = st + st2;
    sort(st4.begin(),st4.end());
    sort(st3.begin(),st3.end());
    if(st3==st4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

