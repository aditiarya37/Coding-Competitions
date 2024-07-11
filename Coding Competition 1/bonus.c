#include<stdio.h>
int main(){
    int num,i,j,rev=0,flag= 0,pal =0;
    printf("Enter a number= ");
    scanf("%d",&num);
    j=num;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag = 0;
            break;
        }
    }
    if(num==i){
        flag = 1;
    }
    while(j>0){
        rev = rev*10;
        rev = rev + j%10;
        j = j/10;
    }
    if(num==rev){
        pal = 1;
    }
    else{
        pal = 0;
    }
    if(pal=1&&flag==1){
        printf("It is prime and palindrome.");
    }
    else{
        printf("It is not prime and palindrome.");
    }
    return 0;
}