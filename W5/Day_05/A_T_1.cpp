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
    int a = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        vector<int> v;
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << a++ << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, r = v.size() - 1, mid;
            int ans=-1;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (v[mid] == x)
                {
                    ans=mid;
                    r=mid-1;
                }
                else if (v[mid] > x)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (ans!=-1)
                cout << x << " found at " << ans + 1 << endl;
            else
                cout << x << " not found" << endl;
        }
    }

    return 0;
}