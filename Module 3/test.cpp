#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int Roll;
    double CGPA;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.Roll >> a.CGPA;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.Roll >> b.CGPA;
    cout << a.name << " " << a.Roll << " " << a.CGPA << endl;
    cout << b.name << " " << b.Roll << " " << b.CGPA << endl;
    return 0;
}