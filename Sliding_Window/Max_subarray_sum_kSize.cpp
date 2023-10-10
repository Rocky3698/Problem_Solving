#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
long maximumSumSubarray(int K, int Arr[], int N)
{
    int i = 0, j = 0;
    long long sum = 0, mx = INT_MIN;
    while (j < N)
    {
        sum += Arr[j];
        if (j >= K - 1)
        {
            mx = max(mx, sum);
            sum -= Arr[i];
            i++;
        }
        j++;
    }
    return mx;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n;
    int arr[n];
    For(i, 0, n) cin >> arr[i];
    cin >> k;
    cout << maximumSumSubarray(k, arr, n) << endl;
    return 0;
}