#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + t);
    for (auto i : arr)
    {
        cout << i << endl;
    }

    return 0;
}