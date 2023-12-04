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
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<int>> pq;
        int arr[m];
        ll sum = 0;
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        In_range(i, 0, m) cin >> arr[i];
        In_range(i, 0, m)
        {
            int x = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }

    return 0;
}