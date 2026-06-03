#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int ans=0;
    while(n>0){
        n = n/10;
        ans++;
    }
    return ans;
}
bool isArmstrong(int x){
    int sum=0;
    int n = x;
    while (n>0){
        sum += pow(n%10,3);
        n=n/10;
        cout<<sum<<endl;
    }
    if(sum==x) return true;
    return false;
}

void printDivisors(int n){
    // METHOD 1
    // for(int i=1;i<=n/2;i++){
    //     if(n%i==0) cout<<i<<" ";
    // }
    // cout<< n;

    //METHOD 2
    for(int i =1;i<=sqrt(36);i++){
        if(n%i==0){
            cout<< i << " ";
            if(i!=n){
                cout << n/i << " ";
            }
        }
    }
}



int main(){
    int n;
    cin>>n;
    // cout<<countDigit(n);
    // cout<<isArmstrong(n);
    printDivisors(n);

}