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
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> v(n, 1);
        v[n - 1] = (s - r);
        r -= (n - 1);
        For(i, 0, n - 1)
        {
            int x = min(v[n - 1] - v[i], r);
            v[i] += x;
            r -= x;
        }
        for (auto a : v)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}