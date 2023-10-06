#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int lenOfLongSubarr(int a[], int n, int s)
{
    int ans = 0;
    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == s)
            ans = max(ans, i + 1);

        if (sum > s)
            if (mp.find(sum - s) != mp.end())
                ans = max(ans, i - mp[sum - s]);

        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}