#include<iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    int choice,count;
    cout << "1) Reverse\n2) Count number of vowels\n3) Check Palindrome\n";
    cin >> choice;
    int n = str.length();
    switch(choice){
        case 1:
        for(int i=n-1;i>=0;i--){
            cout << str[i];
        }
        break;
        case 2:
        count = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U'){
                count++;
            }
        }
        cout << count;
        break;
        case 3:
        string rev = str;
        for(int i=0,j=n-1;i<j;i++,j--){
            swap(rev[i],rev[j]);
        }
        if(rev==str){
            cout << "Palindrome";
        }
        else{
            cout << "Not Palindrome";
        }
    }
    return 0;
}