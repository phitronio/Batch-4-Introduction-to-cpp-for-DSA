#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
    // if (a.marks > b.marks)
    // {
    //     return true;
    // }
    // else if (a.marks < b.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     // if (a.roll < b.roll)
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }
    //     return a.roll < b.roll;
    // }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}