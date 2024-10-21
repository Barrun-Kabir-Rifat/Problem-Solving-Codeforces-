
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long  ll;
typedef unsigned long long int ull;
const ll mod=1e9+7;  
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{

 ull n;
cin>>n;
ull setbits=0;
 for(ll i=62;i>=0;i--)
 {
  
   ull checkbit=((1ull <<i) & n) ;
   if(checkbit)
   {
    setbits++;
   }
 }
if(setbits==1)
{
    
    cout<<1<<en<<n<<en;
    continue;
}
 
 cout<<setbits+1<<en;
 vector<ull>v;
 ull temp=n;
 int setzero=1;
 
 while(setbits--)
 {
   
    int current=0;
    ull value=0;
 for(ll i=62;i>=0;i--)
 {

   ll checkbit=(((1ull<<i)&temp) != 0);
   if(checkbit==1)
   {
    current++;
   }
   if(checkbit==1&&current==setzero)
   {
    checkbit=0;
   }
   value=value+(checkbit*(1ull<<i));
 }
 v.pb(value);
 setzero++;
 }


 v.pb(n);
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++)
 {
    cout<<v[i]<<" ";
 }
 cout<<en;
   
} 
   return 0;
}

/*RIfAt*/