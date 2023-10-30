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
        vector<int> arr(n);
        In_range(i, 0, n) cin >> arr[i];
        int towp = 0;
        // int N = n;
        while (n != 0)
        {
            towp++;
            n /= 2;
        }
        bool flag = false;
        towp--;
        n = pow(2, towp);
        In_range(i, 2, n)
        {
            if (arr[i] > arr[i + 1])
            {
                int ip = 0, ipp = 0;
                int tmpi = i + 1, tmpp = i + 2;
                while (tmpi != 0)
                {
                    ip++;
                    tmpi /= 2;
                }
                while (tmpp != 0)
                {
                    ipp++;
                    tmpp /= 2;
                }
                ipp--;
                ip--;
                tmpi = pow(2, ip);
                tmpp = pow(2, ipp);
                if ((i + 1) > tmpi && ((i + 2) > tmpi))
                {
                    flag = true;
                    break;
                }
            }
        }

        bool flag2 = false;
        In_range(i, n, arr.size() - 1)
        {
            if (arr[i] > arr[i + 1])
                flag2 = true;
        }
        if (flag || flag2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}