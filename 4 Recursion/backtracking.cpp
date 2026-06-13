#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>5) return;
    f(i+1,n);
    cout<< i << " ";
}

int main(){
    int n = 5;
    f(1,n);
}