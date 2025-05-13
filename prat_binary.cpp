#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossiblesolution(vector<int>cookranks,int np,int mid){
    int currp=0;  //initial cooked parata
    for (int i = 0; i < cookranks.size(); i++)
    {
       int R=cookranks[i],j=1;
       int timetaken=0;

       while(true){
        if(timetaken+j*R<=mid){
            ++currp;
            timetaken+=j*R;
            ++j;
        }
        else{
            break;
        }
       }
       if(currp>=np){
        return true;
       }
    }
    return false;
}
int mintimetocompleteorder(vector<int>cookranks,int np){
    int start=0;
    int highest_rank=*max_element(cookranks.begin(),cookranks.end());
    int end=highest_rank*(np*(np+1)/2);
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(ispossiblesolution(cookranks,np,mid)){
            ans=mid;
            end=mid+1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int T;cin>>T;
    while(T--){
        int np,nc;
        cin>>np>>nc;
        vector<int>cookranks;
        while(nc--){
            int R;
            cin>>R;
            cookranks.push_back(R);
        }
        cout<<mintimetocompleteorder(cookranks,np);
    }
    return 0;
}