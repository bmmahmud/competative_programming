// Problem 1 Even ODD
// Hi ! I am B.M.ASHIK MAHMUD
#include<stdio.h>
int main(){
int testCase,number,i;
scanf("%d",&testCase);
    for(i=0;i<testCase;i++){
        scanf("%d",&number);
       (number%2==0)? printf("even\n"):printf("odd\n");
    }
}
