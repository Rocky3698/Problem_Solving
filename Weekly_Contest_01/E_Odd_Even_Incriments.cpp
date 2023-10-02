#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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
        int arr[n];
        For(i, 0, n)cin >> arr[i];
        
        // if(even==odd){cout<<"YES"<<endl;continue;}
        bool flag0 = true, flag1 = true;

        for (int i = 2; i < n; i +=2)
        {
            if (arr[i] % 2 !=arr[0]%2)
            {
                flag0 = false;
                cout<<"NO"<<endl;
                break;
            }
        }
        for(int i=3;i<n;i+=2)
        {
            if(!flag0)break;
            if(arr[i]%2!=arr[1]%2){
                flag1=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag0&&flag1)cout<<"YES"<<endl;
    }

    return 0;
}