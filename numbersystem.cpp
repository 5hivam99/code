//not working on this compiler but working on another compiler
#include<iostream>
#include<cmath>
using namespace std;
int binary_to_decimal( int n){
    
    int decimal=0;
     int i=0;
    while(n>0){
        int bit =n%10;
        decimal = bit*pow(2, i++) + decimal;
        n=n/10;
    }
    return decimal;
}





// int decimal_to_binary_method_2( int n){
//     //bitwise method
//     int binary=0;
//      int i=0;
//     while(n>0){
//         int bit =n&1;
//         binary = bit*pow(10, i++) + binary;
//         n=n>>1;
//     }
//     return binary;
// }


// int decimal_to_binary_method_1( int n){
//     //division method
//     int binary=0;
//      int i=0;
//     while(n>0){
//         int bit = n%2;
//         binary = bit*pow(10, i++) + binary;
//         n=n/2;
//     }
//     return binary;
// }



// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin >> n;
//    int binary= decimal_to_binary_method_2(n);
//    cout<<binary<<endl;
//     return 0;
// } 


int main(){
    int n;
    cout<<"enter the number :";
    cin >> n;
   int binary= binary_to_decimal(n);
   cout<<binary<<endl;
    return 0;
} 