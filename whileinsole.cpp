// Viết chương trình:

// Nhập số nguyên dương n
//  từ bàn phím.
// Tìm và hiển thị tất cả chữ số lẻ có trong số n
// . Nếu không có số nào thì xuất ra màn hình ký tự N.
// Dữ liệu

// Chứa số nguyên dương n
// Kết quả

// Hiển thị tất cả chữ số lẻ, mỗi số cách nhau 1 dấu cách hoặc ký tự N
#include <iostream>
using namespace std;
int main()
{
    int number;
    int sodu;
    cin >> number;
    int i = 0;
    while (number > 0)
    {
        sodu = number % 10;

        if (sodu % 2 != 0)
        {
            i++;
            cout << sodu;
        }
        number = number / 10;
    }
    if (i == 0)
    {
        cout << "N";
    }
    return 0;
}