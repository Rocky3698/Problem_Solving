#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, x;
int GCD(int a, int b)
{
    if (a == 0 || b == 0 || a == b)
        return a | b;
    if (a > b)
        return GCD(a % b, b);
    else
        return GCD(a, b % a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    int ans = 0;
    For(i, 1, k + 1)
    {
        For(j, 1, k + 1)
        {
            For(x, 1, k + 1)
            {
                ans += GCD(i, GCD(j, x));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}