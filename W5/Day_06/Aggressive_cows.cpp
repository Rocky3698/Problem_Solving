#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
bool isValid(int arr[], int n, int c, int diff)
{
    int cc = 1;
    int last = 0;
    In_range(i, 1, n)
    {
        if (abs(arr[i] - arr[last]) >= diff)
        {
            cc++;
            last = i;
        }
    }
    return cc >= c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        In_range(i, 0, n) cin >> arr[i];
        sort(arr, arr + n);
        int l = 0, r = INT_MAX, ans, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (isValid(arr, n, c, mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}