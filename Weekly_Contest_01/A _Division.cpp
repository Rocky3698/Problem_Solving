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

    //     For Division 1: 1900≤rating
    // For Division 2: 1600≤rating≤1899
    // For Division 3: 1400≤rating≤1599
    // For Division 4: rating≤1399
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=1399)cout<<"Division 4"<<endl;
        else if(x<=1599)cout<<"Division 3"<<endl;
        else if(x<=1899)cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    }

    return 0;
}