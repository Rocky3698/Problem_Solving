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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int T;
        cin >> s >> T;
        int H = 0, M = 0;
        H += ((s[0] - '0') * 10 + (s[1] - '0'));
        M += ((s[3] - '0') * 10 + (s[4] - '0'));
        int h = T / 60, m = T % 60;
        int th = H, tm = M, c = 0;
        int a = ceil(1440.0 / double(T))+1;
        while (true)
        {
            int h1 = H / 10, h2 = H % 10, m1 = M / 10, m2 = M % 10;
            if (h1 == m2 && h2 == m1)
            {
                c++;
            }
            // cout << h1 << h2 << ":" << m1 << m2 << endl;
            H += h;
            M += m;
            if (M > 59)
            {
                M -= 60;
                H++;
            }
            if (H > 23)
                H -= 24;
            if(H==th&&M==tm)break;
        }

        cout << c << endl;
    }
    return 0;
}