#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int choice;
    int sum,maxx,min;
    cout << "1) Sum\n2) Max element\n3) Min element\n4) Reverse\n";
    cin >> choice;
    switch(choice){
        case 1:
        sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        cout << sum;
        break;
        case 2:
        for(int i=0;i<n;i++){
            maxx = arr[0];
            if(maxx<arr[i]){
                maxx = arr[i];
            }
        }
        cout << maxx;
        break;
        case 3:
        for(int i=0;i<n;i++){
            min = arr[0];
            if(min>arr[i]){
                min = arr[i];
            }
        }
        cout << min;
        break;
        case 4:
        for(int i=n-1;i>=0;i--){
            cout << arr[i] << " ";
        }
        break;
    }
    return 0;
}