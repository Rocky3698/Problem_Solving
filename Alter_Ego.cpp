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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll TotalSum = 0, HS = 0;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            TotalSum += arr[i];
        }

        if (TotalSum % 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            TotalSum /= 2;
            sort(arr, arr + n, greater<int>());
            In_range(i, 0, n / 2) HS += arr[i];
        }
    }

    return 0;
}