#include<iostream>
using namespace std;
int output(int n, int k){
    int count = 1;
    if(n>k){
        k = 2*k;
        count++;
    }
    else if(n<k){
        if(k%n!=0){
            k = 2*k;
        }
        else{
            return count;
        }
    }
    if(n%k==0){
        return count;
    }
    else{
        count++;
        k = 2*k;
    }
}
int main(){
    int n,k,t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> k;
        cout << output(n,k) << endl;
    }
    return 0;
}