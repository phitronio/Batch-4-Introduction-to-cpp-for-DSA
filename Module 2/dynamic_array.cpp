#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5];
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}