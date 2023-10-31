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
        int n,k;
        cin>>k>>n;
        int arr[n];
        arr[0]=1;
        In_range(i,1,n){
            int rp=k-i-1;
            int rn=n-(arr[i-1]+i);
            if(rp<=rn)arr[i]=arr[i-1]+i;
            else arr[i]=arr[i-1]+1;
        }
        In_range(i,0,k)cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}