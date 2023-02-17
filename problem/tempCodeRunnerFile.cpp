#include<iostream>
using namespace std ;
int main (){
    int n;
    cin >> n ;
    int sum =0;
    if ( n >2){
for ( int i=2; i<=n ; i++){
    sum = 1/i+ sum;
}}
else {
    cout << "Nhaplai";
}
cout<<fixed<<setprecision(4)<<sum;
}