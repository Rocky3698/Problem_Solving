#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int, int> mp;
        For(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr, arr + n);
        int ans = 0;
        For(i, 0, n)
        {
            int val = arr[i];
            if (mp[arr[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}