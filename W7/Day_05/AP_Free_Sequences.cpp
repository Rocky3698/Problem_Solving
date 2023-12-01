#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j, k;

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
        vector<int> arr(n);
        In_range(i, 0, n) cin >> arr[i];
        bool flag = true;
        In_range(i, 0, n - 2)
        {
            In_range(j, i + 1, n - 1)
            {
                In_range(k, j + 1, n)
                {
                    if (arr[j] - arr[i] == arr[k] - arr[j])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;
}