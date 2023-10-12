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
    int ans = 0, i = 0, j = 0, unq = 0, freq[26] = {0};
    while (j < s.size())
    {
        freq[s[j] - 'a']++;
        if (freq[s[j] - 'a'] == 1)
            unq++;
        while (unq > k)
        {
            freq[s[i] - 'a']--;
            if (freq[s[i] - 'a'] == 0)
                unq--;
            i++;
        }
        if (unq == k)
            ans = max(ans, j - i + 1);
        j++;
    }

    if (ans == 0)
        return -1;
    else
        return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}