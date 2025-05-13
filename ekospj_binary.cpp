#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossiblesolution(vector<long long int>&trees,long long int &m, long long int mid){
    long long int woodcollected=0;
    for(long long int i=0;i<trees.size();i++){
        if(trees[i]>mid){
        woodcollected+=trees[i]-mid;
        }
    }
    return woodcollected>=m;
}
long long int maxsawbladeheight(vector<long long int>&trees,long long int &m){
    long long int start=0,end,ans=-1;
    end=*max_element(trees.begin(),trees.end());
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(ispossiblesolution(trees,m,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    long long int m,n;
    cin>>m>>n;
  
    vector<long long int>trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    sort(trees.begin(),trees.end());
    cout<<maxsawbladeheight(trees,m);
    return 0;
}