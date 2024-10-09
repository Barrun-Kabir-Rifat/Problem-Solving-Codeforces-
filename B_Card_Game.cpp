
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
   ll a,b,c,d;
    cin>>a>>b>>c>>d;
   ll mx=max(a,max(b,max(c,d)));
   if(a==mx&&b==mx&&c==mx&&d==mx)
   {
    cout<<0<<en;
   }
    else if(a>=c &&a>=d)
    {
        if(b>=c&&b>=d)
        {
            cout<<4<<en;
        }
        else if(b>=c)
        {
            cout<<2<<en;
        }
        else if(b>=d)
        {
            cout<<2<<en;
        }
        else 
        {
            cout<<0<<en;
        }
    }
    else if(b>=c &&b>=d)
    {
        if(a>=c&&a>=d)
        {
            cout<<4<<en;
        }
        else if(a>=c)
        {
            cout<<2<<en;
        }
        else if(a>=d)
        {
            cout<<2<<en;
        }
        else 
        {
            cout<<0<<en;
        }
    }
    else 
    {
        cout<<0<<en;
    }

   
}
   return 0;
}