#include<bits/stdc++.h>
using namespace std;

int main(){
    //PAIRS
    pair<int, pair<int,int>> p = {1,{1,3}};
    cout<< p.first<<" " << p.second.first << " ";
    

    vector<int> v(5,5);
    for(vector<int>::iterator i = v.begin(); i!=v.end(); i++){
        cout<< *(i);
    }
    cout<<"\n";

    for( auto i : v){
        cout << i << " ";
    }
    cout<<"\n";
    for (auto i=v.begin(); i!=v.end();i++){
        cout<<*(i);
    }
    cout<<"\n";

    priority_queue<int> pq;
    pq.push(1);
    pq.push(7);
    pq.push(9);
    pq.push(6);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    // 
    return 0;
}