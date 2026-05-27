#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit=0;
    int bestBuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<bestBuy){
                bestBuy=prices[i];
            }
            if(profit<prices[i]-bestBuy){
                profit = prices[i]-bestBuy;
            }
        }
        return profit;
    }
    

int main(){
    vector<int> prices1 = {4,3,2,1,0};
    vector<int> prices2 = {7,1,5,3,6,4};
    cout << maxProfit(prices2);
}