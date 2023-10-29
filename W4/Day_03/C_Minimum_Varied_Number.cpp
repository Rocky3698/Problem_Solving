#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In__range(i, s, n) for (int i = s; i >= n; i--)
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
        int x;
        cin >> x;
        vector<int> v;
        In__range(i, 9, 1)
        {
            int d = min(x, i);
            v.push_back(d);
            x -= d;
            if (!x)
                break;
        }
        sort(v.begin(), v.end());
        for (int n : v)
            cout << n;
        cout << endl;
    }

    return 0;
}