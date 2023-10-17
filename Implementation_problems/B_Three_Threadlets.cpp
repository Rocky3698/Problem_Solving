#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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
        int arr[3];
        For(i, 0, 3) cin >> arr[i];
        sort(arr, arr + 3);
        int op = 4;
        if (arr[1] % arr[0] == 0 && arr[2] % arr[0] == 0)
            op = (arr[1] / arr[0] - 1 + arr[2] / arr[0] - 1);

        if (op <= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}