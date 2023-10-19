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
        int ans[n];
        vector<int> arr[n + 1];
        For(i, 1, n + 1)
        {
            For(j, 1, n)
            {
                int x;
                cin >> x;
                arr[x].push_back(j);
            }
        }
        For(i, 1, n + 1)
        {
            int min=INT_MAX;
            int max=INT_MIN;
            for (auto a : arr[i]){
                if(a>max)max=a;
                if(a<min)min=a;
            }
            if(min!=max||max==1)ans[max-1]=i;
            else {
                ans[max]=i;
            }
        }
        For(i,0,n)cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}