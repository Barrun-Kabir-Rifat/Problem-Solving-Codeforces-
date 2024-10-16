
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
const ll mod = 1e9 + 7;

int main()
{
    fast();

    int t = 1;
    cin >> t;
    while (t--)
    {

        ll n, m, q;
        cin >> n >> m >> q;
        ll arr[n];
        ll b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int ptr1 = 0;
        int ptr2 = 0;
        int pre = 0;
        if (arr[ptr1] != b[ptr1])
        {
            cout << "TIDAK" << en;
            continue;
        }

        ll temp = m;
        int flag = 0;

        ll count = 0;

        map<ll, ll> mp;
        while (pre < n)
        {
            if (ptr2 >= m)
            {
                break;
            }

            if (b[ptr2] == arr[pre])
            {
                mp[arr[pre]] = 1;
                ptr2++;
                count = 0;
                continue;
            }
            else if (mp[b[ptr2]] == 1)
            {
                // pre++;
                ptr2++;
                continue;
            }
            else if (b[ptr2] != arr[pre] && count == 0)
            {
                pre++;
                count++;
                if (b[ptr2] != arr[pre])
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "TIDAK" << en;
        }
        else
        {
            cout << "YA" << en;
        }
    }
    return 0;
}

/*RIfAt*/