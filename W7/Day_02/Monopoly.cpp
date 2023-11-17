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
        int m[4], sum = 0;
        In_range(i, 0, 4)
        {
            cin >> m[i];
            sum += m[i];
        }
        bool flag = true;
        In_range(i, 0, 4)
        {
            if (m[i] > sum - m[i])
                flag = false;
        }
        cout << (flag ? "NO" : "YES") << endl;
    }

    return 0;
}