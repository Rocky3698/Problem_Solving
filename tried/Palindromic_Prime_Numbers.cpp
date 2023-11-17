// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long
// #define In_range(i, s, n) for (int i = s; i < n; i++)
// typedef pair<int, int> pii;
// const int INF = 1e9 + 7;
// const int N = 1e5 + 5;
// const int M = 1e3 + 5;
// int i, j;
// bitset<500001> Primes;
// void SieveOfEratosthenes()
// {
//     Primes[0] = 1;
//     for (int i = 3; i * i <= N; i += 2)
//     {
//         if (Primes[i / 2] == 0)
//         {
//             for (int j = 3 * i; j <= n; j += 2 * i)
//                 Primes[j / 2] = 1;
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         SieveOfEratosthenes();
//         for (int i = 1; i <= n; i++)
//         {
//             if (i == 2 || (i % 2 == 1 && Primes[i / 2] == 0))
//                 cout << i << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }
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
        int n, x = 0, y = 0;
        cin >> n;
        string s;
        cin >> s;
        In_range(i, 0, n)(s[i] == '?') ? x++ : y = y + (s[i] - '0');
        if (s[0] == '?')
        {
            cout << "1";
            x--;
            while (x--)
                cout << "0";
            cout << endl;
        }
        else
        {
            if (x > 0)
            {
                y %= 9;
                if (!y)
                {
                    x--;
                    while (x--)
                        cout << "1";
                    cout << "2" << endl;
                }
                else
                {
                    while (x--)
                        cout << "1";
                    cout << endl;
                }
            }
            else
            {
                if (y % 9)
                    cout << "0" << endl;
                else
                    cout << "1" << endl;
            }
        }
    }

    return 0;
}