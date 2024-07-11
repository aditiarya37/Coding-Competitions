#include<iostream>
using namespace std;
int main(){
    float bal;
    cout << "Enter bank balance: ";
    cin >> bal;
    int x;
    cout << "Enter the amount to be withdrawn: ";
    cin >> x;
    float tran;
    if(x%5==0){
        tran = x + 0.50;
    }
    else{
        cout << "Can't withdrawl.";
    }
    cout << "Bank balance: " << bal-tran;
    return 0;
}