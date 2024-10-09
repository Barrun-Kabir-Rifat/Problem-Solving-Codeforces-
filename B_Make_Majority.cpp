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
    ll n;
    cin>>n;
   string str;
   cin>>str;
  // string s="";
   ll fg=0;
   int zero =0;
   int one= 0;
   for(int i=0;i<str.size();i++)
   {
       
       if(str[i]=='0'&&fg==0)
       {  
       // s=s+str[i];
        zero++;
        fg=1;
       }
       if(str[i]=='1')
       {
           one++;
          //s=s+str[i];
          fg=0;
       }
   }
  
  
   if(zero>=one)
   {
       cout<<"NO"<<en;
   }
   else
   {
       cout<<"YES"<<en;
   }
}
   return 0;
}