#include<bitset>/stdc++.h>
using namespace std;

int gasStation(vector<int>&gas,vector<int>& cost){
    int n=gas.size();
    int total_gas=0,total_cost=0;
    int curr_gas=0,starting_point=0;
    for(int i=0;i<n;i++){
        total_gas+=gas[i];
        total_cost+=cost[i];

        curr_gas+=gas[i]-cost[i];
        if(curr_gas<0){
            starting_point=i+1;
            curr_gas=0;
        }
    }
    return (total_gas<total_cost)?-1:starting_point;
    }

    int main(){
        vector<int> gas={1,2,3,4,5};
        vector<int> cost={3,4,5,1,2};
        int ans=gasStation(gas,cost);
        cout<<ans;
    }