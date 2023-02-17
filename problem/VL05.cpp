#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0;
    if (n > 2)
    {
        for (int i = 2; i <= n; i++)
        {

            sum = sum + 1.0 / i;
        }
        cout << setprecision(4) << fixed << sum;
    }
    else
    {
        cout << "Nhaplai";
    }
    return 0;
}