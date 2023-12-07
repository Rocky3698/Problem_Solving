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
        int n, x;
        bool flag = true;
        cin >> n >> x;
        int a[n], b[n];
        In_range(i, 0, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if (x > n / 2)
        {
            sort(b, b + n);
            In_range(i, 0, n)
            {
                if (a[i] != b[i] && x > max(i, n - 1 - i))
                {
                    flag = false;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        ;
    }

    return 0;
}