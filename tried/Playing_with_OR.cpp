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
        cin>>n>>k;
        int arr[n];
        In_range(i,0,n)cin>>arr[i];
        int i=0,j=0,cnt=0;
        bool flag=false;
        int odd=0;
        while(j<n){
            if(arr[j]%2)odd++;
            if(j>=k-1){
                if(odd>0)cnt++;
                if(arr[i]%2)odd--;
                i++;
            }
            j++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}