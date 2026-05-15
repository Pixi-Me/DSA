#include<iostream>
using namespace std;

int main(){

    // IF ADULT
    int age;
    cin >> age;
    if (age<18){
        cout << "Nope" <<"\n";
    }
    else {
        cout <<"Welcome Adult";
    }
    return 0;
}