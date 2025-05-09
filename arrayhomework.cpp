#include<iostream>
#include<vector>
using namespace std;

// void moveallnegetivetoleft(int *a,int n){
//     int l=0;
//    int h=n-1;
//     while(l<=h){
//         if(a[l]<0){
//             l++;
//         }
//         else if(a[h]>0){
//             h--;
//         }
//         else{
//             swap(a[l],a[h]);
//         }
//        }
// }



// int main(){
//    int a[]={1,2,-3,4,-5,6};
//    int n=sizeof(a)/sizeof(int);
   
//    cout<<"before";
//    for(auto value:a){
//     cout<<value<<" ";
//    }

//    moveallnegetivetoleft(a,n);
//    cout<<endl<<"after";
//        for(auto value:a){
//         cout<<value<<" ";
//        }
    
//    return 0;

// }


void findmissing(int *a,int n){
    //visited method
    for(int i=0;i<n;i++){
    int index=abs(a[i]);
    if(a[index-1]>0){
        a[index-1]*=-1;
    }
    }
    for(int i=0;i<n;i++){
        // cout<<a[i]<<" ";
        if(a[i]>0){
            cout<<i+1<<" ";
        }
    }

}
int main(){
    int n;
    int a[]={1,3,3,3,4};
    n=sizeof(a)/sizeof(int);
    findmissing(a,n);
    return 0;
}