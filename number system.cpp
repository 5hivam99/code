#include<iostream>
using namespace std;
int decimal_to_binary_method_1( int n){
    while(n>0){
        int bit = n%2;
        cout<<bit;
        n=n/2;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enet the number :";
    cin >> n;
   int binary= decimal_to_binary_method_1(n);
   
    return 0;
}