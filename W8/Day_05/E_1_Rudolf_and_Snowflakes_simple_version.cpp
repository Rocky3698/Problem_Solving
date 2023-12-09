#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e6 + 1;
const int M = 1e3 + 5;
bool snow[N];
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    In_range(i, 2, 1001)
    {
        int add = i * i;
        int num = i + 1 + add;
        while (num < N)
        {
            snow[num] = 1;
            add *= i;
            num += add;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (snow[n] ? "YES" : "NO") << endl;
    }

    return 0;
}