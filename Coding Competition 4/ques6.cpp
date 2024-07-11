#include<iostream>
using namespace std;
int main(){
    int menu;
    cout << "Choose between:\n1) Breakfast\n2) Lunch\n3) Dinner\n4) Check out\n";
    int submenu;
    cout << "Choose for breakfast:\n1) Bread and Butter-$40\n2) Parantha-$80\n3) Juices-$100\n";
    cout << "Choose for Lunch:\n1) Paneer Rice-$200\n2) Rajma Rice-$180\n3) Aloo Parantha-$150\n";
    cout << "Choose for Dinner:\n1) Chole Bhature-$200\n2) Desserts-$400\n3) Drinks-$500\n";
    cin >> menu;
    int quantity;
    cout << "Choose! And quantity: ";
    cin >> submenu >> quantity;
    int price = 0;
    int total = 0;
    switch(menu){
        case 1:
        switch(submenu){
            case 1:
            price += 40;
            total = price*quantity;
            break;
            case 2:
            price += 80;
            total = price*quantity;
            break;
            case 3:
            price += 100;
            total = price*quantity;
        }
        break;
        case 2:
        switch(submenu){
            case 1:
            price += 200;
            total = price*quantity;
            break;
            case 2:
            price += 180;
            total = price*quantity;
            break;
            case 3:
            price += 150;
            total = price*quantity;
        }
        break;
        case 3:
        switch(submenu){
            case 1:
            price += 200;
            total = price*quantity;
            break;
            case 2:
            price += 400;
            total = price*quantity;
            break;
            case 3:
            price += 500;
            total = price*quantity;
        }
        break;
        case 4:
        cout << "Thank you for visiting us.";
        break;
        default:
        cout << "Invalid Input.";
    }
    cout << "Your total is " << total;
    if(total>=1000){
        total = total - (0.10*total);
        cout << "Discounted Total: " << total;
    }
    return 0;
}