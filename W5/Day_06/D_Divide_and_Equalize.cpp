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
        int arr[n];
        In_range(i, 0, n) cin >> arr[i];
        int l = 0, r = INT_MAX;
        bool flag = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            double tmp = 1.0;
            In_range(i, 0, n)
            {
                tmp *= (arr[i] * 1.0 / mid);
            }
            if (fabs(tmp - 1.0) < 1e-15)
            {
                flag = true;
                break;
            }
            else if (tmp > 1.0)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}