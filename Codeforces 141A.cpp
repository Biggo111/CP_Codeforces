#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st2,st3;
    int flag;
    cin>>st>>st2>>st3;
    string st4 = st + st2;
    int len = st4.size();
    int len2 = st3.size();
    sort(st4.begin(),st4.end());
    sort(st3.begin(),st3.end());
    if(len==len2)
    {
        for(int i=0; i<st3.size(); i++)
        {
            for(int j=0; j<st4.size(); j++)
            {
                if(st3[i]!=st4[j])
                {
                    flag=1;
                    break;
                }
                else
                {
                    //flag=0;
                    break;
                }
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
     if(flag!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
}
