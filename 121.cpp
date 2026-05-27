#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int min=prices[0];
    int minDate=0;
    int max;
    bool isMax = false;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<min){
            min=prices[i];
            minDate=i;
        }
    }
}

int main(){
    vector<int> prices = {1,7,5,4,3,7,9};
    cout << maxProfit(prices);
}