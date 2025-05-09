#include<iostream>
#include<vector>
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


    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> arr;
    cout<<"enter the numbers :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int unique_element= find_unique(arr);
    cout<<"unique element are : "<<unique_element<<endl;

    









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