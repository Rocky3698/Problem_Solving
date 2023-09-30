#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Custom_Sort
{
public:
    char c;
    int count;
};
bool cmp(Custom_Sort a, Custom_Sort b)
{
    if (a.count > b.count)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Custom_Sort freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i].c = 'a' + i;
        freq[i].count = 0;
    }

    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        char c;
        cin >> c;
        freq[c - 'a'].count++;
    }
    sort(freq, freq + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (freq[i].count)
        {
            for (int j = 0; j < freq[i].count; j++)
            {
                cout << freq[i].c;
            }
        }
    }

    return 0;
}