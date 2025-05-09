#include<iostream>
#include<limits.h>
using namespace std;


void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}


void inc(int arr[], int size){
    for(int i=0;i<size;i++){
    arr[i]=(arr[i]+1);
    }
    printarray(arr,size);
}

bool find(int arr[],int size,int key){

    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    //not found
    return false;
}
int main(){
    //array declaration 
    // int arr[6];
    // cout<<"array created successfully"<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;

    // int a[53];
    // char c[106];
    // bool b[23];
    // cout<<"created"<<endl;

    // int array[]={1,2,3,4,5,6};
    // int brray[6]={1,2,3,4,5,6};
    // int crray[10]={1,2,3,4,5,6,8};
    // cout<<"created";




    // int arr[5]={10,20,30,40,50};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
    // //agar hm declaration se extra array ka value dalenge to garbage value dega
    // cout<<arr[5]<<endl;

    // //easy method to prin all values:
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }


    //enter the input values of array

    // int arr[10];
    // for(int i=0;i<10;i++){
    //     cout<<"enter the "<<i+1<<" value of array : ";
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // //for printing taken values by user:
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }



    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout<<"enter the "<<i+1<<" value of array : ";
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // //for printing taken values by user:
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]*2<<endl;
    // }



    // int arr[500];
    // int n;
    // cout<<"enter the no of numbers you want to double: "<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"enter the "<<i+1<<" value of array : ";
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // //for printing taken values by user:
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]*2<<endl;
    // }


    //  int arr[5]={10,20,30,40,50};
    //     for(int i=0;i<5;i++){
    //         arr[i]=1;
    //         cout<<arr[i]<<endl;
    //     }


    // int arr[10]={1,2,3};
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }

    
    // int arr[10]={0};
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }



    // int arr[5]={1,56,76,45,46};
    // int size=5;
    // inc(arr , size);
    // printarray(arr,size);




    //linear search method 1:

    // int arr[8]={1,56,76,45,56,34,24,46};
    // int key;
    // int size=8;
    // cout<<"enter the key you want to find: ";
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }


    //  linear search method 2:

    //  int arr[8]={1,56,76,45,56,34,24,46};
    // int key;
    // cout<<"enter the key you want to find: ";
    // cin>>key;
    // bool flag=0;
    // //0--->not found
    // //1---> found
    // for(int i=0;i<8;i++){
    // if(arr[i]==key){
    //     flag=1;
    // }
    // }
    // if(flag==0){
    //     cout<<key<<" is not found";
    //        break;
    // }
    // else{
    //     cout<<key<<" is found";
    // }


   // // find maximum number in an array

    //  int arr[8]={1,56,76,45,56,34,24,46};
    //  int size=8;
    //  int max = INT_MIN;
    //  for(int i=0;i<size;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    //  }
    //  cout<<max<<" is the maximum number";
    

      // find minimum number in an array

    //   int arr[8]={1,56,76,45,56,34,24,46};
    //   int size=8;
    //   int min = INT_MAX;
    //   for(int i=0;i<size;i++){
    //      if(arr[i]<min){
    //          min=arr[i];
    //      }
    //   }
    //   cout<<min<<" is the minimum number";



    
    //   int arr[9]={1,56,76,45,34,24,46};
    //   int size=7;
    //   int start=0;
    //   int end=size-1;
    //   while(true){
    //     if(start > end)
    //         break;
        
    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
        
    //  }


    //reverse in an array
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int start=0;
    int end=size-1;
    while(start<=end){
    swap(arr[start], arr[end]);
      start++;
      end--;  
   }
   //printing reverse array
   for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
   }



return 0;
}