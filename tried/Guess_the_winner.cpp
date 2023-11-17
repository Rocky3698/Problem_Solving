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
        vector<int> odf;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                bool flag = true;
                int x = i;
                for (int j = 2; j * j <= x; j++)
                {
                    if (x % j == 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag && (x % 2))
                {
                    odf.push_back(x);
                    break;
                }
                if (n / i != i)
                {
                    bool flag = true;
                    int x = n / i;
                    for (int j = 2; j * j <= x; j++)
                    {
                        if (x % j == 0)
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag && (x % 2))
                    {
                        odf.push_back(x);
                        break;
                    }
                }
            }
        }
        if (odf.size() == 0)
        {
            cout << "Bob" << endl;
            continue;
        }
        sort(odf.begin(), odf.end());
        int x = odf[odf.size() - 1];
        x = n / x;
        if (x % 2)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}
#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)even++;
        else odd++;
    }
    printf("%d %d",even,odd);
}
int main(){
    odd_even();
    return 0;
}