#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    long long prefix[N + 1];
    for (int i = 0; i <= N; i++)
        prefix[i] = 0;
    for (int i = 0; i < N; i++)
        prefix[i + 1] = prefix[i] + Arr[i];
    int x = 0, y = K;
    long long ans = INT_MIN;
    for (int i = 0; i < N - K + 1; i++)
    {
        ans = max(ans, prefix[y] - prefix[x]);
        x++;
        y++;
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