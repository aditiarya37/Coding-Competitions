#include<iostream>
#include<string>
using namespace std;
string checkPalindrome(string s){
    string temp = s;
    int n = s.length()-1;
    for(int i=0,j=n;i<j;i++,j--){
        if(s[i]!=s[j]){
            swap(s[i+1],s[j]);
            checkPalindrome(s);
        }
    }
    if(temp==s){
        return s;
    }
    else{
        cout << -1;
    }
}
string output(int x, int y){
    string s1,s2;
    int i,j;
    for(i=0;i<x;i++){
        s1[i] = 'a';
    }
    for(j=x;j<(x+y);j++){
        s1[j] = 'b';
    }
    /*for(int i=0;i<(x+y);i++){
        cout << s1[i];
    }*/
    string temp1 = checkPalindrome(s1);
    for(int i=0;i<(x+y);i++){
        cout << temp1[i];
    }
}
int main(){
    int t,x,y;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> x >> y;
        output(x,y);
        cout << endl;
    }
    return 0;
}