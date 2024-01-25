#include <bitset>/stdc++.h>
using namespace std;
int rob(vector<int>& nums){
    int rob=0;
    int norob=0;
    for(int i=0;i<nums.size();i++){
        int newrob=norob+nums[i];
        int newnorob=max(norob,rob);
        rob=newrob;
        norob=newnorob;
    }
    return max(rob,norob);

}

int main(){
    vector<int> nums={2,3,2};
    int ans=rob(nums);
    return ans;


}