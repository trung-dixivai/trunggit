// Vi?t chuong tŕnh nh?p vào ba s? nguyên a, b, c
// . In ra s? l?n nh?t c?a 3 s? dó.

// D? li?u vào

// Ba s? nguyên a,b,c
// , m?i s? trên 1 ḍng.
// K?t qu?

// M?t s? nguyên là giá tr? l?n nh?t c?a 3 s?
#include <iostream>
using namespace std;
int main()
{
    int month, year;
    cin >> month >> year;
    switch (month)
    {
    case 1:
    case 3:
    case 5:

    case 8:
    case 10:
    case 12:
        cout << "31day";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 day";
        break;
    case 2:
        if (year % 400 == 0)
        {
            cout << " 29 day";
        }
        else if (year % 4 == 0 && year % 100 != 0)
        {
            cout << "29day";
        }
        else
        {
            cout << "28day";
        }
    }
    return 0;
}