#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int reversed=0;
    bool isNeg = false;

    if(n<0){
        isNeg = true;
        if(n==INT_MIN) return 0;
        else n=-n;
    }

    while(n>0){
        if(reversed > INT_MAX/10){
            return 0; 
        }
        else if(reversed == INT_MAX/10){
            if(isNeg ? n%10<=8 : n%10<=7){
                reversed = reversed*10 + n%10;
                n=n/10;

            }
            else return 0;
        }
        else{
            reversed = reversed*10 + n%10;
                n=n/10;

        }
       }
       return isNeg ? -reversed : reversed;
}

int main(){
    int num;
    cin>>num;
    cout<<reverse(num);
}