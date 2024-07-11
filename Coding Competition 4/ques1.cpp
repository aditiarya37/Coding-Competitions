#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count = 1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout << count;
    return 0;
}