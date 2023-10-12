#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int longestSubstrDistinctChars(string s)
{
    int i = 0, j = 0, ans = 0, freq[26] = {0};
    while (j < s.size())
    {
        freq[s[j] - 'a']++;
        if (freq[s[j] - 'a'] > 1)
        {
            ans = max(ans, j - i);
            while (s[i] != s[j])
            {
                freq[s[i] - 'a']--;
                i++;
            }
            freq[s[i] - 'a']--;
            i++;
        }
        // else ans=max(ans,j-i);
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}