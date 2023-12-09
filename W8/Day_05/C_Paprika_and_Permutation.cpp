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
        map<int, bool> m;
        vector<int> v;
        ll ans = 0;
        In_range(i, 0, n)
        {
            int a;
            cin >> a;
            if (!m[a] && a <= n)
                m[a] = 1;
            else
            {
                ans++;
                v.push_back(a);
            }
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 1, j = 0; i <= n && flag; i++)
        {
            if (!m[i])
            {
                if (v[j] < (2 * i + 1))
                    flag = false;
                else
                    j++;
            }
        }
        cout << (flag ? ans : -1) << endl;
    }

    return 0;
}