#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x = a + b + c; ///2+1+2=5
    int y = a * (b+c); ///2 + (1+2)=6
    int z = (a+b) * c; ///(2+1)*2 = 6
    int l = a*b*c;     ///2*1*2 = 4
    if(x>y && x>z && x>l)cout<<x<<endl;
    else if(y>x && y>z && y>l)cout<<y<<endl;
    else if(z>x && z>y && z>l)cout<<z<<endl;
    else if(l>x && l>y && l>z)cout<<l<<endl;
    else
    {
        int k = max(x,y);
        k = max(k,z);
        k = max(k,l);
        cout<<k<<endl;
    }
}
