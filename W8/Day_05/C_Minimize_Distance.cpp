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
        int n, k;
        cin >> n >> k;
        vector<int> nx, px;
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            (x < 0) ? nx.push_back(abs(x)) : px.push_back(x);
        }
        sort(px.rbegin(), px.rend());
        sort(nx.rbegin(), nx.rend());
        ll ans = 0, far = 0;
        for (int i = 0; i < px.size(); i += k)
        {
            if (!i)
            {
                far = px[i];
                continue;
            }
            ans += (px[i] * 2);
        }
        for (int i = 0; i < nx.size(); i += k)
        {
            if (!i && nx[i] > far)
            {
                int temp = far;
                far = nx[i];
                nx[i] = temp;
            }
            ans += (nx[i] * 2);
        }
        cout << ans + far << endl;
    }

    return 0;
}