
/* Allah is the best planner.He knows everything*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
}

int main()
{
    fast();

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll arr[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        // sort(arr, arr + n);
        int j = 0;
        vector<ll> v;
        // need to satisty a[i]%k==a[j]%k then possible to increase mex;
        int flag = 0;
        map<ll, ll> rem_of_smallindex;
        while(1)
        {
           
            if (mp[j] >= 1)
            {

                mp[j]--;
                    ll rem = j % k;
                    rem_of_smallindex[rem] += (mp[j]);
                j++;
            }
            else if (rem_of_smallindex[j % k] > 0)
            {
                rem_of_smallindex[j % k]--;
                j++;
            }
            else
            {
                break;
            }
        }
        cout << j<< en;
    }
    return 0;
}