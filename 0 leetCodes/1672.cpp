//1672. Richest Customer Wealth
#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts){
    int h=0;
    for(auto it : accounts){
        for(int i=1; i<it.size();i++){
            it[i]+=it[i-1];
        }
        if(it[it.size()-1] > h) h=it[it.size()-1];

    }
    cout<<h;
}

int main(){
    vector<vector<int>> accounts = {{1,3,3},{3,2,1}};
    maximumWealth(accounts);

}