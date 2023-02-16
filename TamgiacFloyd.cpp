// Vi?t chuong trình v? tam giác Floyd v?i chi?u cao n
//  nh?p t? bàn phím (n>0
// ).

// N?u nh?p chi?u cao không h?p l?, in ra màn hình: N.

// Tam giác Floyd là m?t tam giác vuông du?c t?o t? các s? t? nhiên. Các s? trong tam giác Floyd có giá tr? tang d?n.

// D? li?u

// S? nguyên n
// K?t qu?

// Tam giác Floyd tuong ?ng
#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int number =1;
    if ( n==0){
        cout << "N";
    }
    else {
        for ( int i=1 ; i<= n ; i++ ){
            for ( int j= 1; j<= i ; j++){
                cout << number <<" " ;
                number ++;

            }
            cout << endl;
        }
    }
    return 0;
}