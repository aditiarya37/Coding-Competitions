#include<stdio.h>
int main(){
    int num1,num2,a,sum=0;
    printf("Enter first number= ");
    scanf("%d",&num1);
    printf("Enter second number= ");
    scanf("%d",&num2);
    while(num1>=1){
        if(num1%2!=0){
            sum += num2;
        }
        num1 /= 2;
        num2 *= 2;
    }
    printf("The product is %d.",sum);
    return 0;
}