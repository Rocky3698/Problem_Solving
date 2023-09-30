#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin>>size;
    vector<int> freq(26, 0);
    for (int i = 0; i < size; i++)
    {
        char c;
        cin >> c;
        freq[c - 'a']++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (freq[c - 'a'])
        {
            for (int i = 0; i < freq[c - 'a']; i++)
            {
                cout << c;
            }
        }
    }

    return 0;
}