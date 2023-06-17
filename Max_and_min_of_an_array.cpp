#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct Pair
{
    int max;
    int min;
};
Pair FindMaxMin(int arr[], int size)
{
    Pair MinMax;
    MinMax.min = INT_MAX;
    MinMax.max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > MinMax.max)
            MinMax.max = arr[i];
        if (arr[i] < MinMax.min)
            MinMax.min = arr[i];
    }
    return MinMax;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Pair MinMax = FindMaxMin(arr, size);
    cout << "Maximum is " << MinMax.max << endl
         << "Minimum is " << MinMax.min << endl;
    return 0;
}