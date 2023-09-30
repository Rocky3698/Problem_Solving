#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int eye, mouth, body;
    cin >> eye >> mouth >> body;
    int dall = 0;

    dall += min(min(eye, body), mouth);
    eye -= dall;
    body -= dall;
    mouth -= dall;
    
    dall += min(eye / 2, body);
    eye -= (dall * 2);
    body -= dall;

    cout << dall << endl;
    return 0;
}