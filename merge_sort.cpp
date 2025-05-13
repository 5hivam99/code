#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    //creating array
    int *left=new int[len1];
    int *right=new int[len2];

    //copy values in these newly created array
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merging logic
    int leftindex=0;
    int rightindex=0;
    int mainindex=s;

    while(leftindex<len1&&rightindex<len2){
        if(left[leftindex]<=right[rightindex]){
            arr[mainindex++]=left[leftindex++];
        }
        else{
            arr[mainindex++]=right[rightindex++];
        }
    }

    //copy logic for remaining element in left array
    while(leftindex<len1){
        arr[mainindex++]=left[leftindex++];
    }

    //copy logic for remaining element in right array
    while(rightindex<len2){
         arr[mainindex++]=right[rightindex++];
    }
}
void mergesort(int *arr,int s,int e){
    //base case
    //s==e  ---> single element
    //s>e invalid array
    if(s>=e) return;

    int mid=(s+e)/2;
    //left part ko sort
    mergesort(arr,s,mid);
    //right part ko sort
    mergesort(arr,mid+1,e);

    //now mergetwo sorted array
    merge(arr,s,e);
}
int main(){
    int arr[]={4,5,13,2,12};
    int n=5;
    int s=0;
    int e=n-1;

    mergesort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}