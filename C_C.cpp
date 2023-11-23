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
bool isValid(int arr[], int n, int mid)
{
    int lp = mid - 1, rp = mid + 1;
    ll ans = arr[mid] + n - 1;
    In_range(i, 0, n)
    {
        if (lp >= 0)
        {
            if (arr[lp] > arr[mid])
            {
                arr[mid]++;
                lp--;
            }
            else
                return false;
        }
        if (rp < n)
        {
            if (arr[rp] < arr[mid])
            {
                arr[mid]++;
            }
            else
                return false;
        }
    }
    if (arr[mid] == ans)
        return true;
    else
        return false;
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
        int n;
        cin >> n;
        int arr[n];
        ll sum = 0;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int l = 0, r = n - 1, mid, ans = -1;
        for (int mid = 0; mid < n; mid++)
        {
            // mid = l + (r - l) / 2;
            if (isValid(arr, n, mid))
            {
                ans = mid;
                break;
            }
            // else if ()
            // {
            // }
            // else
            // {
            // }
        }
        cout<<ans<<endl;
    }

    return 0;
}