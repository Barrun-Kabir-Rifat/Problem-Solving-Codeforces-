
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
   ll arr[n];
   ll sumofcards=0;
   ll mx_count=0;
   for(int i=0;i<n;i++) 
   {
    cin>>arr[i];
    sumofcards=sumofcards+arr[i];
    mx_count=max(mx_count,arr[i]);
   }
   ll mx_sumofcards=sumofcards+k;

   ll decksize=n;
  int flag=0;
   while(decksize>1)
   {
        ll card_count=mx_sumofcards/decksize;
        if(card_count*decksize>=sumofcards&&card_count>=mx_count)
        {
            cout<<decksize<<en;
            flag=1;
            break;
        }
        else
        {
            decksize--;
        }
   }
    if(flag==0)
    {
        cout<<decksize<<en;
    }


}
   return 0;
}