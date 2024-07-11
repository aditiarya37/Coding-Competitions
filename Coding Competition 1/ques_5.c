#include<stdio.h>
int main(){
    int i,j,k,l;
    /*for(i=1;i<=4;i++){
        for(j=2;j<=i;j++){
            printf(" ");
        }
        for(k=i;k<=4;k++){
            printf("%d",k);
        }
        for(l=4;l>i;l--){
            printf("%d",l);
        }
        printf("\n");
    }*/
    for(i=1;i<=7;i += 2){
        for(j=1;j<=i;j += 2){
            printf(" ");
        }
        for(j=i;j<=7;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(k=5;k>=1;k -= 2){
        for(l=1;l<=k;l += 2){
            printf(" ");
        }
        for(l=k;l<=7;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}