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
        long long n;
        cin >> n;
        vector<long long> card(n);
        In_range(i, 0, n) cin >> card[i];

        long long power = 0;
        while (card[0] == 0 && card.size() > 1)
        {
            card.erase(card.begin());
            n--;
        }
        In_range(i, 0, n)
        {
            if (card[i] == 0)
            {
                long long mx = *max_element(card.begin(), card.begin() + i);
                long long me = max_element(card.begin(), card.begin() + i) - card.begin();
                power += mx;
                card.erase(card.begin() + me);
                n--;
                i--;
            }
        }

        cout << power << endl;
    }

    return 0;
}