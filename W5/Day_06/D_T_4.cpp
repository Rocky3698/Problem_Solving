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
bool isValid(ll mid, int arr[], int n, int m)
{
    ll sum = 0, cc = 0;
    In_range(i, 0, n)
    {
        if (sum + arr[i] <= mid)
            sum += arr[i];
        else
        {
            cc++;
            sum = arr[i];
        }
    }
    cc++;
    return cc <= m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    while (cin >> n >> m)
    {
        ll sum = 0;
        int arr[n];
        In_range(i, 0, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        ll l = 0, r = sum, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (isValid(mid, arr, n, m))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }

    return 0;
}