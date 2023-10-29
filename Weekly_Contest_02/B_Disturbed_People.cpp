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

    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    int d = 0;
    In_range(i, 0, n) cin >> arr[i];
    In_range(i, 1, n - 1)
    {
        if (arr[i] == 0)
        {
            if (arr[i - 1] == 1 && arr[i + 1] == 1)
            {
                d++;
                v.push_back(i);
            }
        }
    }
    if (d == 0)
        cout << 0 << endl;
    else
    {
        In_range(i, 0, v.size() - 1)
        {
            if (v[i + 1] - v[i] == 2)
            {
                d--;
                i++;
            }
        }
        cout << d << endl;
    }

    return 0;
}