
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
const ll mod=1e9+7;  
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
 ll n;
cin>>n;
ll arr[n];
ll sum=0;
for(int i=0;i<n;i++)
{

cin>>arr[i];
sum=sum+arr[i];

}
 sort(arr,arr+n);
 if(n<=2)
 {
    cout<<-1<<en;
 }
 else if((arr[(n/2)]*2*n)<sum)
 {
    cout<<0<<en;
 }
 else 
 {
   ll min_avg=(2*(arr[(n/2)]));
   min_avg=min_avg*n;
   ll ans=min_avg-sum;
   cout<<ans+1<<en;
 }

}
   return 0;
}

/*RIfAt*/