#include<bits/stdc++.h>
using namespace std;

void printN(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    printN(i+1,n);
}
void printNto1(int i, int n){
    if(i>n) return;
    cout<<n<<endl;
    printNto1(1,n-1);
}
int main(){
    printN(1,10);
    printNto1(1,190);
}