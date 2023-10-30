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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> cars(n), power(m);
        In_range(i, 0, n) cin >> cars[i];
        In_range(i, 0, m) cin >> power[i];
        sort(cars.begin(), cars.end(), greater<int>());
        sort(power.begin(), power.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < n && i < m; i++)
        {
            ans += min(cars[i], power[i] * h);
        }
        cout << ans << endl;
    }

    return 0;
}