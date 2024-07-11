#include<stdio.h>
int checkleapyear(int year);
int main(){
    /*int year;
    int day=1;
    printf("Enter a year= ");
    scanf("%d",&year);
    int lpy = checkleapyear(year);
    // 01/01/01 was Monday
    // 01/01/year will be
    if(lpy = 0){
        for(int i=1;i<=365;i=i+7){
            day = 1;
        }
    }
    else{
        for(int i=1;i<=366;i++){
        day++;
        }
    }
    switch(day){
        case 1:
        printf("It is Monday.");
        break;
        case 2:
        printf("It is Tuesday.");
        case 3:
        printf("It is Wednesday.");
        break;
        case 4:
        printf("It is Thursday.");
        case 5:
        printf("It is Friday.");
        break;
        case 6:
        printf("It is Saturday.");
        case 7:
        printf("It is Sunday.");
    }*/
    int year,month=1,day=1;
    printf("Enter the year= ");
    scanf("%d",&year);
    int i = year%100;
    int j = year/100;
    int day_jan = (day+13*(month+1)/5 + i + i/4 + j/4 + 5*j)%7;
    switch(day_jan){
        case 0:
        printf("Monday");
        break;
        case 1:
        printf("Tuesday");
        break;
        case 2:
        printf("Wednesday");
        break;
        case 3:
        printf("Thursday");
        break;
        case 4:
        printf("Friday");
        break;
        case 5:
        printf("Saturday");
        break;
        case 6:
        printf("Sunday");
    }
    return 0;
}
int checkleapyear(int year){
    int flag=0;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
        else{
            flag = 1;
        }
    }
    else{
        flag = 0;
    }
    return flag;
}