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
        int bits[30] = {0};
        In_range(i, 0, n)
        {
            int a;
            cin >> a;
            In_range(j, 0, 30)
            {
                if ((a >> j) & 1)
                    bits[j]++;
            }
        }

        In_range(i, 1, n + 1)
        {
            bool flag = 1;
            for (int x = 0; x < 30 && flag; x++)
            {
                if (bits[x] % i)
                    flag = false;
            }
            if (flag)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}