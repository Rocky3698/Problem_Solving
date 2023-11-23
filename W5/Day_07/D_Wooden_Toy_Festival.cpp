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
bool isValid(vector<int>v,int n, int dif){
    int c=1;int idx=0;
    In_range(i,0,n){
        if(abs(v[i]-v[idx]+dif)>dif){
            c++;
            idx=i;
        }
    }
    return c<=3;
}
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
        vector<int>v(n);
        In_range(i,0,n)cin>>v[i];
        sort(v.rbegin(),v.rend());
        int l=0,r=INT_MAX,ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(v,n,mid)){
                ans= mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}