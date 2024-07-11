#include<stdio.h>
int main(){
    int choice1;
    printf("Menu:\n1) Breakfast\n2) Lunch\n3) Dinner\n");
    printf("Choose from the menu= ");
    scanf("%d",&choice1);
    switch(choice1){
        case 1:
        printf("The breakfast menu is:\n1) Bread Jam    Rs 50\n2) Poha  Rs 40\n3) Chole Bhature    Rs 50\n");
        break;
        case 2:
        printf("The lunch menu is:\n1) Dal Rice    Rs 100\n2) Rajma Rice   Rs 90\n3) Shahi Paneer    Rs 120\n");
        break;
        case 3:
        printf("The dinner menu is:\n1) Chole Rice    Rs 90\n2) Matar Paneer and Rice   Rs 150\n3) Shahi Paneer    Rs 120\n");
    }
    int choice2,amount,total;
    printf("Enter the choice from submenu= ");
    scanf("%d",&choice2);
    printf("Enter the amount= ");
    scanf("%d",&amount);
    if(choice1 == 1){
        switch(choice2){
        case 1:
        total = amount*50;
        break;
        case 2:
        total = amount*40;
        break;
        case 3:
        total = amount*50;
    }}
    else if(choice1 == 2){
        switch(choice2){
        case 1:
        total = amount*100;
        break;
        case 2:
        total = amount*90;
        break;
        case 3:
        total = amount*120;
    }}
    else{
        switch(choice2){
        case 1:
        total = amount*90;
        break;
        case 2:
        total = amount*150;
        break;
        case 3:
        total = amount*120;
    }
    }
    printf("Your total is Rs %d.",total);
    return 0;
}