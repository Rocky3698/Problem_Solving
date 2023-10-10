#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,s,n)for(int i=s;i<n;i++)
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
        int arr[4];
        For(i,0,4)cin>>arr[i];
        int a=arr[0];
        sort(arr,arr+4);
        For(i,0,4)if(arr[i]==a)cout<<3-i<<endl;


    }

    return 0;
}