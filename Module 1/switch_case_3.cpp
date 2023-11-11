#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    switch (x)
    {
    case 'a': // if(x=='a')
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";
    }
    return 0;
}