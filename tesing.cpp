#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int GCD(int a, int b)
{
    if (b == 0||a==0)
        return a|b;
    if(a==b)return a;
    if(a>b)return GCD(a%b, b);
    else return GCD(a,b%a);
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int n=67495675;
    // int a=floor(n/pow(10,5));
    // cout<<a%10<<endl;
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);

    return 0;
}