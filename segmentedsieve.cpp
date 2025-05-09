// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;



//  vector<bool>Sieve(int n){
//     vector<bool>sieve(n+1,true);
//     sieve[0]=sieve[1]=false;
//     for(int i=2;i*i<=n;i++){
//         if(sieve[i]==true){
//             int j=i*i;
//         while(j<=n){
//             sieve[j]=false;
//             j+=i;
//         }
//      }
//     }
//     return sieve;
// }

// vector<bool>segsieve(int l,int r){
//     vector<bool>sieve=Sieve(sqrt(r));
//     vector<int>baseprimes;
//     for(int i=0;i<sieve.size();i++){
//         if(sieve[i]){
//             baseprimes.push_back(i);
//         }
//     }
//     vector<bool>segsieve(r-l+1,true);
//     if(l==1||l==0){
//         segsieve[l]=false;
//     }

//     for(auto prime:baseprimes){
//         int first_mul=(l/prime)*prime;
//         if(first_mul<l){
//             first_mul+=prime;
//         }
        
//         int j=max(first_mul,prime*prime);
//         while(j<=r){
//             segsieve[j]=false;
//             j+=prime;
//         }
//     }
//     return segsieve;
// }

// int main(){
//         int l=110;int r=130;
//         vector<bool>ss=segsieve(l,r);
//         for(int i=0;i<ss.size();i++){
//             if(ss[i]){
//                 cout<<i+l<<" ";
//             }
//         }
//         return 0;
// }




// //optimized sieve of eratasthenes
// // int main(){
// //     vector<bool>sieve=Sieve(25);
// //     for(int i=0;i<=25;i++){
// //         if(sieve[i]){
// //             cout<<i<<" ";
// //         }
// //     }
// //     return 0;
// // }



// correct
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> Sieve(int n) {
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

vector<bool> segsieve(long long l, long long r) {
    vector<bool> sieve = Sieve(sqrt(r));
    vector<long long> baseprimes;
    for (int i = 0; i < sieve.size(); i++) {
        if (sieve[i]) {
            baseprimes.push_back(i);
        }
    }
    vector<bool> segsieve(r - l + 1, true);
    if (l == 0 || l == 1) {
        segsieve[0] = false;
    }
    for (auto prime : baseprimes) {
        long long first_mul = ((l + prime - 1) / prime) * prime;
        if (first_mul < l) {
            first_mul += prime;
        }
        for (long long j = max(first_mul, prime * (long long)prime); j <= r; j += prime) {
            segsieve[j - l] = false;
        }
    }
    return segsieve;
}

int main() {
    long long l = 110, r = 130;
    vector<bool> ss = segsieve(l, r);
    for (int i = 0; i < ss.size(); i++) {
        if (ss[i]) {
            cout << i + l << " ";
        }
    }
    cout << endl;
    return 0;
}