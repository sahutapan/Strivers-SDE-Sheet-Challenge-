#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int profit=INT_MAX,maxProfit=0;
    for(auto x:prices)
    {
        profit=min(x,profit);
        maxProfit=max(x-profit,maxProfit);
    }
    return maxProfit;
}