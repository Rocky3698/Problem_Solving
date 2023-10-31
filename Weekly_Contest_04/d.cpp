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
        int arr1[n], arr2[n];
        In_range(i, 0, n) cin >> arr1[i];
        In_range(i, 0, n) cin >> arr2[i];
        int om = 0, addy = 0, st = 0;
        In_range(i, 0, n)
        {
            if (arr1[i] == 0)
            {
                om = max(om, st);
                st = 0;
            }
            else
                st++;
        }
        if (arr1[n - 1])
            om = max(om, st);
        st = 0;
        In_range(i, 0, n)
        {
            if (arr2[i] == 0)
            {
                addy = max(addy, st);
                st = 0;
            }
            else
                st++;
        }
        if (arr2[n - 1])
            addy = max(addy, st);
        if (addy > om)
            cout << "Addy" << endl;
        else if (addy < om)
            cout << "Om" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}