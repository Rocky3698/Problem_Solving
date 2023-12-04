#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr[n];
        vector<int>sm,sm2;
        In_range(i,0,n){
            int sz;
            cin>>sz;
            In_range(j,0,sz){
                int x;
                cin>>x;
                arr[i].push_back(x);
            }
            sort(arr[i].begin(),arr[i].end());
            sm.push_back(arr[i][0]);
            if(sz>1)sm2.push_back(arr[i][1]);
        }
        sort(sm.begin(),sm.end());
        sort(sm2.begin(),sm2.end());
        ll sum=0;
        sum+=sm[0];
        In_range(i,1,sm2.size())sum+=sm2[i];
        cout<<sum<<endl;
    }

    return 0;
}