
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
 ll n,k;
 cin>>n>>k;
 if(k==0)
 {
 cout<<0<<en;
 continue;
 }
 k=k-n;
 if(k<=0)
 {
    cout<<1<<en;
    continue;
 }
   ll it=n-1;
   int count=1;
   while(k>0)
   {
       k=k-it;
       count++;
       if(k<=0)
       {
        break;
       }
       k=k-it;
       count++;
       if(k<=0)
       {
        break;
       }
       it--;
   }
   cout<<count<<en;
}
   return 0;
}