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
        int n, q;
        cin >> n >> q;
        ll arr[n];
        ll ES = 0, OS = 0;
        int EC = 0, OC = 0;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            (arr[i] % 2) ? OS += arr[i] : ES += arr[i];
            (arr[i] % 2) ? OC++ : EC++;
        }
        while (q--)
        {
            int f, x, tmp;
            cin >> f >> x;
            if (f)
            {
                tmp = OC * x;
                OS += tmp;
                if (x % 2)
                {
                    EC += OC;
                    OC = 0;
                    ES += OS;
                    OS = 0;
                }
            }
            else
            {
                tmp = EC * x;
                ES += tmp;
                if (x % 2)
                {
                    OC += EC;
                    EC = 0;
                    OS += ES;
                    ES = 0;
                }
            }
            cout << ES + OS << endl;
        }
    }

    return 0;
}