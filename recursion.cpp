#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
 

//finding factorial of n
// int factorial(int n){
//     //base case
//     if(n==1||n==0) return 1;
//     int ans=n*factorial(n-1);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the value of n "<<endl;
//     cin>>n;

//     int ans=factorial(n);
//     cout<<"answer is "<<ans;
// }

//printing counting 
// void printcounting(int n){
//     //base case
//     if(n==0) return;


//     //recursive relation
//     printcounting(n-1);

//         //processing
//         cout<<n<<endl;

// }
// int main(){
//     int n;
//     cout<<"enter the value of n "<<endl;
//     cin>>n;

//     printcounting(n);
// }


//find fibonacci at nth position
// int fib(int n){
//     //base cases:---->
//     //first term
//     if(n==1) return 0;
//     //second term
//     if(n==2) return 1;

//     int ans=fib(n-1)+fib(n-2);
//     return ans;

// }
// int main(){
//     int n;
//     cout<<"enter the value of n "<<endl;
//     cin>>n;

//     int ans = fib(n);
//     cout<<ans;
// }





// void printnumberinarray(int arr[],int n,int i){
//         //base condition
//         if(i>=n) return;

//         //ek case solve karna hai
//         cout<<arr[i]<<" ";

//         //baki recursion sambhal lega
//         printnumberinarray(arr,n,i+1);
// }

// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     int i=0;
//     printnumberinarray(arr,n,i);
//     return 0;
// }



// void printdigit(int n){
//     //base case
//     if(n==0) return ;

//     int newvalueofn=n/10;
//     printdigit(newvalueofn);
//     //ek case mai karunga
//     int digit;
//     digit=n%10;
//     cout<<digit<<" ";

// }

// int main(){
//     int n;
//     cout<<"enter a number "<<endl;
//     cin >> n;
//     printdigit(n);
//     return 0;
// }




//check an is sorted or not
// bool checksorted(vector<int>&arr,int n,int i){
//     //base case
//     if(i==n-1) return true;
//     //1 case solve karna hai
//     if(arr[i+1]<arr[i]) return false;
//     //baki recursion par chhod do
//     return checksorted(arr,n,i+1);
// }
// int main(){
//     vector<int>arr={12,34,56,67,89};
//     int n=arr.size();
//     int i=0;
//     bool issorted=checksorted(arr,n,i);
    
//     if(issorted){
//         cout<<"array is sorted";
//     }
//     else{
//         cout<<"array is not sorted";
//     }
//     return 0;
// }





//binary search through recursion
// int binarysearch(vector<int>&v,int s,int e,int key){
//     //base case
//     if(s>e) return -1;
//     int mid=s+(e-s)/2;
//     if(v[mid]==key) return mid;

//     if(v[mid]<key){
//         return binarysearch(v,mid+1,e,key);
//     }
//     else{
//         return binarysearch(v,s,mid-1,key);
//     }
// }
// int main(){
//     vector<int>v{10,20,30,40,50,60,};
//     int target=40;

//     int n=v.size();
//     int s=0;
//     int e=n-1;
//     int ans=binarysearch(v,s,e,target);
//     cout<<"answer is at index "<<ans;
//     return 0;
// }





//printing subsquences of a string(substring)
// void printsubsquences(string str,string output,int i){
//     //base case
//     if(i>=str.length()){
//         cout<<output<<endl;
//         return;
//     }

//     //exclude
//     printsubsquences(str,output,i+1);

//     //include
//     output.push_back(str[i]);
//     printsubsquences(str,output,i+1);
// }
// int main(){
//     string str="abc";
//     string output="";
//     int i=0;
//     printsubsquences(str,output,i);
//     return 0;

// }






//minimum number of coin to reach sum of target rupee from n coins
int solve(vector<int>&arr,int target){

    //base case
    if(target==0) return 0;
    if(target<0) return INT_MAX;

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int>arr{1,2};
    int target =5;

    int ans=solve(arr,target);
    cout<<"answer is "<<ans<<endl;
    return 0;
}































