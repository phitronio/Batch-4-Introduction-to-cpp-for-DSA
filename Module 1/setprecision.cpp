#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    // printf("%0.2lf\n", a);
    // cout << a << endl;
    cout << fixed << setprecision(5) << a << endl;
    return 0;
}