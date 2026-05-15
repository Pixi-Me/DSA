#include<iostream>
using namespace std;

int main(){

    // IF ADULT

    /*int age;
    cin >> age;
    if (age<18){
        cout << "Nope" <<"\n";
    }
    else {
        cout <<"Welcome Adult";
    }*/

    //Grade calculator

    /*int marks;
    cout << "Enter marks:";
    cin >> marks;
    if(marks >= 85){
        cout << 'A';
    }
    else if(marks >=75){
        cout << "AB";
    }
    else if(marks>=65){
        cout << "B";
    }
    else if(marks>=55){
        cout << "D";
    }
    else {
        cout << "Fail";
    }*/

    // NESTED If

    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age <18){
        cout << "Not eligible";
    }
    else {
        if(age <=55){
            cout << "Eligible";
        }
        else if (age <=57){
            cout << "Eligible, retirment soon";
        }
        else {
            cout << "Retirment";
        }
    }
    return 0;
}