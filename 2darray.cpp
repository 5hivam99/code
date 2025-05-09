#include<iostream>
#include<limits.h>
using namespace std;

void rowsum(int arr[][4],int row,int column){
    cout<<"row wise sum is: ";
      ///printing values of sum (row wise)
      for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum=arr[i][j]+sum;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void columnsum(int arr[][4],int row,int column){
    cout<<"column wise sum is: ";
    ///printing values of sum (column wise)
    for(int i=0;i<column;i++){
      int sum=0;
      for(int j=0;j<row;j++){
          sum=arr[j][i]+sum;
      }
      cout<<sum<<" ";
  }
}


bool findkey(int arr[][4],int row,int column,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if( key==arr[j][i]){
                return 1;
            }
           
        }
}
return 0;
}



int maximum(int arr[][4],int row,int column){
    int max=INT_MIN;
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
        }
    
    }
}
return max;
}



int minimum(int arr[][4],int row,int column){
    int min=INT_MAX;
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
        }
    
    }
}
return min;
}

void print2darray(int arr[][4],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][4],int row,int column,int trasposearr[][4]){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        //    swap(arr[i][j],arr[j][i]);
        trasposearr[j][i] = arr[i][j];
    }
    
    }
    
}

int main(){
    // //declare 2D array
    // int arr[3][3];
    // //initialisation
    // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // ///printing values of brr(row wise)
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //   ///printing values of brr(column-wise)
    //   for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }





    // //taking input from user(row-wise)
    // int arr[4][3];
    // int row=4;
    // int column=3;
    // cout<<"enter the elements"<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //  ///printing values of arr(row wise)
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    


    // //question 1: row sum:
    // int arr[5][4];
    // int row=5;
    // int column=4;

    // int n;
    // cout<<"enter the number you want to find: ";
    // cin>>n;
    
    // //taking input from user(row-wise)
    // cout<<"enter the elements"<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // rowsum(arr,row,column);

    // columnsum(arr,row,column);
    // cout<<endl;

    // int ans=findkey(arr,row,column,n);
    // if(ans==1){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }
    // cout<<endl;

    // int max=maximum(arr,row,column);
    // cout<<"maximum number in given 2d array is :"<<max<<endl;

    // int min=minimum(arr,row,column);
    // cout<<"minimum number in given 2d array is :"<<min<<endl;



    int arr[4][4];
    int row=4;
    int column=4;
     //taking input from user(row-wise)
    cout<<"enter the elements"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    //trnspose of a matrix
    int trasposearr[4][4];
    transpose(arr,row,column,trasposearr);
    print2darray(trasposearr,row,column);
        return 0;
}
// 1 2 3 4
// 2 3 4 1 
// 5 6 1 3
// 2 4 6 8
// 1 9 9 6