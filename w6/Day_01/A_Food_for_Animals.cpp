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
int a, b, c, x, y;
int solve()
{
    if (x <= a && y <= b)
        return true;
    int dog = x - a, cat = y - b;
    if (x > a && y > b)
        return (dog + cat <= c);
    else if (x > a)
        return (dog <= c);
    else
        return (cat <= c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        cout << (solve() ? "YES" : "NO") << endl;
    }

    return 0;
}