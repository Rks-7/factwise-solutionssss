#include<bits/stdc++.h>
using namespace std;

int findIndex(int nums[],int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return end+1;
}

int main(){
    int arr[]={1,3,5,6};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=5;
    int ans=findIndex(nums,target)
}