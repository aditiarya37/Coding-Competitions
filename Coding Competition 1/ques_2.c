#include<stdio.h>
int main(){
    int A;
    printf("Enter a number= ");
    scanf("%d",&A);
    if(A%2==0 && A%7==0){
        printf("Alice takes home the number.");
    }
    else if(A%2!=0 && A%3==0){
        printf("Bob takes home the number.");
    }
    else{
        printf("Charlie takes home the number.");
    }
    return 0;
}