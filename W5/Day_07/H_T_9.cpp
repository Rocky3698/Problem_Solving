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
bool isValid(int arr[],int n,int ans,ll m){
    ll sum=0;
    In_range(i,0,n){
        if(arr[i]>=ans)sum+=(arr[i]-ans);
    }
    return sum>=m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;ll m;
    cin>>n>>m;
    int arr[n];
    In_range(i, 0, n) cin >> arr[i];
    int l=0,r=INT_MAX,Ans=0;
    while(l<=r){
        int ans=l+(r-l)/2;
        if(isValid(arr,n,ans,m)){
            Ans=ans;
            l=ans+1;
        }
        else r=ans-1;
    }
    cout<<Ans<<endl;
    return 0;
}
