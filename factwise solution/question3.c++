// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bestbuy(vector<int> &prices)
{
    int n = prices.size();
    int maxval = 0;
    int buyprice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        buyprice = min(buyprice, prices[i]);
        maxval = max(maxval, prices[i] - buyprice);
    }
    return maxval;
}
int main()
{
    // Write C++ code here
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = bestbuy(prices);

    std::cout << ans;

    return 0;
}