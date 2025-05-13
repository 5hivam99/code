#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //step 1-->choosing pivot element
    int pivotindex=s;
    int pivotelement=arr[s];

    ///step 2--->find right position and place pivot element there
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotelement){
            count++;
        }
    }

    int rightindexofpivot=s+count;
    swap(arr[pivotindex],arr[rightindexofpivot]);
    pivotindex=rightindexofpivot;

    //step 3---> left me chhota, right me bada
    int i=s;
    int j=e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i]<pivotelement){
            i++;
        }
        while(arr[j]>pivotelement){
            j++;
        }

        //2 case ho sakte hai
        //A=--->you found the element to swap
        //B---->no need to swap
        if(i<pivotindex&&j>pivotindex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e) return;
    //partition logic and finding pivot element index
    int p=partition(arr,s,e);
    //recursive calls
    //pivot-->left
    quicksort(arr,s,p-1);
    //pivot--->right
    quicksort(arr,p+1,e);
}
int main(){
    int arr[]={8,1,3,4,20,50,30};
    int n=7;
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}