#include<stdio.h>
int main(){
    int x;
    printf("Enter the angle= ");
    scanf("%d",&x);
    int num = 360/(180-x);
    printf("The number of trapeziums required to form a closed loop is %d.",num);
    return 0;
}