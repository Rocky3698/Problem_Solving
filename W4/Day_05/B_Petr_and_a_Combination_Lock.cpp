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
vector<int> a;

bool rotate(int p, int i)
{
    if (i == a.size())
        return (p == 0);

    if (rotate((p + a[i]) % 360, i + 1))
        return true;
    return rotate((p - a[i] + 360) % 360, i + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << (rotate(0, 0) ? "YES" : "NO");

    return 0;
}