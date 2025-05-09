#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int find_unique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
    }
    return ans;
}


int main()
{
        // sort 0's and 1's
    vector<int> arr{0,1,1,0,1,0,1,0,0,0,1,0,1,0,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start<end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        if(arr[i]==1)
        {
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(auto value:arr){
        cout<<value<<" ";
    }



    // //find pair sum=9
    // vector<int>arr{1,3,5,7,2,4,6};
    // //outer loop will transverse all elements
    // for(int i=0;i<arr.size();i++){
    //     //for every element, will traverse on aage wal element
    //     for(int j=i;j<arr.size();j++){
    //         if(arr[i]+arr[j]==9){
    //             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    //         }
            
    //     }
    // }
   





    //printing pairs with one aage wala
    // vector<int>arr{10,20,40,60,70};
    // //print all pairs
    // //outer loop will transverse all elements
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     //for every element, will traverse on aage wal element
    //     for(int j=i+1;j<arr.size();j++){
    //         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //     }
    // }
   





    // //GALAT HO GAYA HAI
//     // //union of two array with duplicates
//     int arr[]={1,2,3,3,4,4,6,8};
//     int sizea=9;
//     int brr[]{3,4,5,9,3,10};
//     int sizeb=6;

//     vector<int>ans;
//     ///outer loop for arr array
//     for(int i=0;i<sizea;i++){
//         //inner loop for brr array
//         for(int j=0;j<sizea;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=INT_MIN;
//             }
//         }
//     }
//     //outer loop for brr array
//     for(int i=0;i<sizeb;i++){
//         //inner loop for brr array
//         for(int j=0;j<sizeb;j++){
//             if(brr[i]==brr[j]){
//                 arr[j]=INT_MIN;
//             }
//         }
//     }
//     //outer loop for arr array
//      for(int i=0;i<sizea;i++){
//         //inner loop for brr array
//         for(int j=0;j<sizeb;j++){
//             if(arr[i]==brr[j]){
//                 brr[j]=INT_MIN;
//                  }
//         }
//     }
    
//     //push all elements of arr
//     for(int i=0;i<sizea;i++){
//         if(arr[i]!=INT_MAX){
//         ans.push_back(arr[i]);
//         }
//     }

//     //push all elements of brr
//     for(int i=0;i<sizeb;i++){
//         if(brr[i]!=INT_MAX){
//         ans.push_back(brr[i]);
//         }
//     }
//   //printinting resultant array
//     for(auto value:ans){
//         cout<<value<<" ";
//     }





    //intersection of two arrays
    // int arr[]={1,2,3,3,4,4,6,8};
    // int sizea=6;
    // int brr[]{3,4,9,3,10};
    // int sizeb=4;

    // vector<int>ans;
    // ///outer loop for arr array
    // for(int i=0;i<sizea;i++){
    //     //inner loop for brr array
    //     for(int j=0;j<sizeb;j++){
    //         if(arr[i]==brr[j]){
    //             ans.push_back(brr[j]);
    //             brr[j]=INT_MIN;
                
    //         }
    //     }
    // }
    // for(auto value:ans){
    //     cout<<value<<" ";
    // }




    // //union of two array assuming there is no duplicates
    // int arr[]={1,2,3,4,5};
    // int sizea=5;
    // int brr[]={6,7,8,9,10,11};
    // int sizeb=6;
    // vector<int>ans;
    // //push all elements of arr
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }
    // //push all elements of brr
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }

    // //printinting resultant array
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }





    // int n;
    // cout<<"enter the size of array: ";
    // cin>>n;
    // vector<int> arr(n);
    // cout<<"enter the numbers :"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int unique_element= find_unique(arr);
    // cout<<"unique element are : "<<unique_element<<endl;

    




    // vector<int> arr;
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;
    // cout<<arr.size()<<endl;;
    // cout<<arr.capacity();

    // //inserting element into dynamic array or vector
    // arr.push_back(5);
    // arr.push_back(7);

    // //printing values in vector
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }

    // //to remove an entity
    // arr.pop_back();
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }


    // int n;
    // cout<<"enter the size of array: ";
    // cin>>n;

    // vector<int> arr(n);
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }
    return 0;
}