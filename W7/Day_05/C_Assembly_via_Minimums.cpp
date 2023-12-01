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
        int m = (n * (n - 1)) / 2;

        int a[n], b[m];
        In_range(i, 0, m)
                cin >>
            b[i];
        sort(b, b + m);

        for (int i = 0, j = 0, k = n - 1; i < m; i += k, j++, k--)
            a[j] = b[i];
        a[n - 1] = b[m - 1];

        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}