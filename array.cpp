#include<iostream>
#include<vector>
using namespace std;
int main()
{
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


    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}