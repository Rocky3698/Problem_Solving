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
        int n;
        cin >> n;
        int arr[10001] = {0};
        For(i, 0, n)
        {
            int x;
            cin >> x;
            arr[x]++;
        }
        int sum = 0;
        For(i, 1, 10001)
        {
            if (arr[i])
                sum += arr[i] - 1;
        }
        

        // For(i,1,n+1)if(arr[i])cout<<arr[i]<<" ";
        // cout<<sum<<endl;
        if (sum % 2 == 0)
            cout << n - sum << endl;
        else
            cout << n - sum - 1 << endl;
    }

    return 0;
}