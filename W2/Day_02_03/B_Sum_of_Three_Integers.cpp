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

    int k, s, c = 0;
    cin >> k >> s;
    For(i, 0, k + 1)
    {
        For(j, 0, k + 1)
        {
            if ((s - i - j) <= k&&(s-i-j)>=0)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}