#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student *rahim = new Student(342, 5, 4.99);
    return rahim;
}
int main()
{
    Student *ans = fun();
    // cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    delete ans;
    return 0;
}