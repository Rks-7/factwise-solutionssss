
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr)
{
    set<int> st;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int j=0;
    for (auto i : st)
    {
        arr[j]=i;
        j++;
            }
    
    return st.size();
}
int main()
{
    // Write C++ code here
    vector<int> arr = {1, 1, 2, 3};

    int ans = removeDuplicates(arr);

    cout << ans;

    return 0;
}