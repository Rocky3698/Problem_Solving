#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int longestKSubstr(string s, int k)
{
    // your code here
    int ans = 0;
    int n = s.size();
    int i = 0, j = 0;
    int fr[26] = {0};
    int unq = 0;
    while (j < n)
    {
        fr[s[j] - 'a']++;
        if (fr[s[j] - 'a'] == 1)
        {
            unq++;
        }

        while (unq > k)
        {
            fr[s[i] - 'a']--;

            if (fr[s[i] - 'a'] == 0)
            {
                unq--;
            }
            i++;
        }

        if (unq == k)
        {
            ans = max(ans, j - i + 1);
        }

        j++;
    }

    if (ans)
        return ans;
    else
        return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}