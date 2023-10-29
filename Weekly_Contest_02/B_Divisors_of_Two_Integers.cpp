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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    In_range(i, 0, n) cin >> arr[i];
    sort(arr, arr + n);
    int mx = arr[n - 1];
    map<int, int> mp;
    for (int i = 1; i * i <= mx; i++)
    {
        if (mx % i == 0)
        {
            mp[i]++;
            if (mx / i != i)
                mp[mx / i]++;
        }
    }
    In_range(i, 0, n)
    {
        if (mp[arr[i]] >= 1)
        {
            mp[arr[i]]--;
            arr[i] = 0;
        }
    }
    sort(arr, arr + n);
    int mn = arr[n - 1];
    cout << mx << " " << mn << endl;

    return 0;
}