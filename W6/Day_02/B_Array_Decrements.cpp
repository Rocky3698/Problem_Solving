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
        int a[n], b[n];
        In_range(i, 0, n) cin >> a[i];
        In_range(i, 0, n) cin >> b[i];
        bool flag = true;
        int min_dif = INT_MAX, max_dif = INT_MIN;
        In_range(i, 0, n)
        {
            int dif = a[i] - b[i];
            if (b[i])
                min_dif = min(min_dif, dif);
            max_dif = max(max_dif, dif);
            if (dif < 0 || max_dif > min_dif)
            {
                flag = false;
                break;
            }
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

    return 0;
}
