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
        int n, k;
        cin >> n >> k;
        vector<pii> a;
        int b[n];
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }
        In_range(i, 0, n) cin >> b[i];
        int arr[n];
        sort(a.begin(), a.end());
        sort(b, b + n);
        In_range(i, 0, n)
            arr[a[i].second] = b[i];
        In_range(i, 0, n) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}