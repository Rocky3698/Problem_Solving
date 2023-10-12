#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int lenOfLongSubarr(int A[], int N, int K)
{
    int ans = 0;
    long long sum = 0;
    map<long long, int> mp;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sum == K)
            ans = max(ans, i + 1);
        else
        {
            if (mp.find(sum - K) != mp.end())
                ans = max(ans, i - mp[sum - K]);
        }
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