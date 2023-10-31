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
        int arr[n + 1];
        In_range(i, 0, n + 1) arr[i] = 0;
        vector<int> v;
        In_range(i, 1, n + 1)
        {
            int x;
            cin >> x;
            if (arr[x]){
                v.push_back(arr[x]);
                arr[x]=i;
            }
            else arr[x]=i;
        }
        if (v.size() == 0)
        {
            cout << "0" << endl;
            continue;
        }
        int mx = INT_MIN;
        In_range(i, 0, v.size()) if (v[i] > mx) mx = v[i];
        cout << mx << endl;
    }

    return 0;
}