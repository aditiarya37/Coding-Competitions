#include<iostream>
#include<string>
using namespace std;
void palindrome(string str){
    string rev = str;
    int n = str.length();
    int i=0,j=n-1;
    while(i<j){
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
        i++,j--;
    }
    if(rev==str){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
}
int main(){
    string str;
    cin >> str;
    palindrome(str);
    return 0;
}