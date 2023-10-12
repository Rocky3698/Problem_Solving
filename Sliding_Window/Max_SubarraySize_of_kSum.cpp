#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    long long i = 0, j = 0, sum = 0, mx = 0;
    while (j < a.size())
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
            mx = max(mx, j - i + 1);
        j++;
    }
    return mx;
}
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

    return 0;
}