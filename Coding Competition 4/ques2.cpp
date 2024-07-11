#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int sumN = (size*(size+1))/2;
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout << sumN-sum;
    return 0;
}