#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int frequency[26]={0};
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32; // for convert A->a
        frequency[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << char(i+'a')<<"-->"<<" "<<frequency[i]<<endl;
    }

    return 0;
}