#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int start =0;
    int end=size - 1;
    

    while(start<=end){
        int mid=start + (end-start) / 2;
        int element=arr[mid];
    if(element==target){
        //target found
        return mid;
    }
   
    else if(element<target){
         //search in left
        start=mid+1;
    }
    
    
    else if(element>target){
        //search in right
        end=mid-1;
    }
   
    }

    //if element does not found
    return -1;

}


int firstOcc(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            //ans store
            ans=mid;
             //search in left
             e=mid-1;
        }
       
        else if(arr[mid]<target){
             //search in left
            s=mid+1;
        }
        
        
        else if(arr[mid]>target){
            //search in right
            e=mid-1;
        }

    }
    return ans;
}



int lastOcc(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            //ans store
            ans=mid;
             //search in right
             s=mid+1;
        }
       
        else if(arr[mid]<target){
             //search in left
            s=mid+1;
        }
        
        
        else if(arr[mid]>target){
            //search in right
            e=mid-1;
        }

    }
    return ans;
}




int binary_search(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s);
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=s && arr[mid+1]==target){
            return {mid+1};
        }
        if(mid+1<=e && arr[mid-1]==target){
            return (mid-1);
        }
        if(arr[mid]>target){
            e=mid-2;
        }
        else {
            s=mid+2;
        }
    }
    return -1;
}
// int main(){

//     vector<int>arr{10,3,40,20,50,80,70};
//     int target=3;

//     int ans=binary_search(arr,target);
//     cout<<"target position is at "<<ans<<endl;

//     return 0;
// }





int divide(int dividend,int divisor){
int s=0;
int e=abs(dividend);
int ans=0;

while(s<=e){
    int mid=s+(e-s);
   //perfect answer
    if(mid*abs(divisor)==abs(dividend)){
        ans=mid;
        break;
    }
    if(mid*abs(divisor)<abs(dividend)){
        //store
        ans=mid;
        // right search
        s=mid+1;
    }
    else{
        //left search
        e=mid-1;
    }
}

//for sign of quotient
if((divisor<0 && dividend<0)||(divisor>0 && dividend>0)){
return ans;
}
else{
    return -ans;
}
}

// int main(){
//     int dividend =22;
//     int divisor=7;
//     int n;
//     cout<<"enter the precison you want ";
//     cin>>n;
//     int ans=divide(dividend,divisor);
//     cout<<"ans is "<<ans<<endl;

//     //for precision part
//     double finalans=ans;
//     double step=0.1;
//     for(int i=0;i<n;i++){
//         for(double j=finalans;j*divisor<=dividend;j=j+step){
//             finalans=j;
//         }
//         step=step/10;
//     }
//     cout<<"final ans is "<<finalans<<endl;
//     return 0;
// }





int findpivotElemnt(vector<int>arr){
    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(s==e){
            //single element
            return s;
        }
        if(mid+1<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1<=s && arr[mid-1]>arr[mid]){
            return mid-1;
        }if(arr[s]>arr[mid]){
            //left search
            e=mid-1;
        }
        else{
            //right search
            s=mid+1;
        }
    }
    return -1;
}

// int main(){
//     vector<int>arr{9,10,1,2,3,4,5};
//     int ans=findpivotElemnt(arr);
//          cout<<"index of pivot element is "<<ans<<endl;
//          cout<<"value at pivot element is "<<arr[ans]<<endl;
//     return 0; 
// }


int oddOccuringElement(vector<int>arr){

    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(s==e){
            //single element
            return e;
        }
        if(mid%2==0){//mid==even
            if(arr[mid]==arr[mid+1]){
                //right search
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{//mid==odd

            if(arr[mid]==arr[mid-1]){
                s=mid+1;

            }
            else{
                e=mid-1;
            }
        }
    }
}
// int main(){
//     vector<int> arr{1,1,2,2,3,3,4,5,5,6,6,7,7,1,1,2,2,3,3,100,100};
//     int ans=oddOccuringElement(arr);
//     cout<<"index of odd occuring element is "<<ans<<endl;
//     cout<<"value at odd occuring element is "<<arr[ans]<<endl;
//     return 0; 
// }



// int main(){
    // int arr[]={1,2,3,4,6,8,9};
    // int size =7;
    // int target = 3;
 
    // int indexoftarget = binarysearch(arr,size,target);
    
    // if(indexoftarget==-1){
    //     cout<<"target not found";

    // }
    // else{
    //     cout<<"index of target is at "<<indexoftarget;
    // }




    // vector<int> v{1,2,3,4,5,6,7,8};

    // if(binary_search(v.begin(), v.end(), 40)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }



    //   int arr[]={1,2,3,4,6,8,9};
    // int size =7;
    //  if(binary_search(arr, arr+size, 4)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }



//     vector<int> arr{1,2,3,4,4,4,4,5,6,6,7,8,8,9};
//     int target= 4;

//     int ans= firstOcc(arr,target);
//     //in built function for first occurance
//     auto ans1=lower_bound(arr.begin(), arr.end(), target);
//     int last= lastOcc(arr,target);
//       //in built function for last occurance
//     auto ans2=upper_bound(arr.begin(), arr.end(), target);
//     cout<<"first is "<<ans<<endl;
//     cout<<"first is "<<ans1-arr.begin()<<endl;
//     cout<<"last is "<<last<<endl;
//     cout<<"last is "<<ans2-arr.begin()<<endl;
//     return 0;
// }