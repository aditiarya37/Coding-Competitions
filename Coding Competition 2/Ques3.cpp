#include<iostream>
using namespace std;
int main(){
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    switch(choice){
        case 1:
        cout << "Ten's place: " << (num/10)%10;
        break;
        case 2:
        if(num%3==0 && num%5==0){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
        break;
        case 3:
        if((num%10 + (num/10)%10)>9){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    return 0;
}