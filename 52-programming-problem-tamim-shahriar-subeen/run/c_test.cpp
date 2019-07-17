// Problem 1 Even ODD
// Hi ! I am B.M.ASHIK MAHMUD
#include<stdio.h>
#include<string>
int main(){
int testCase,i,num;
string number;
scanf("%d",&testCase);
    for(i=0;i<testCase;i++){
        scanf("%s",number);
        num=stoi(number);
       (num%2==0)? printf("even\n"):printf("odd\n");
    }
}
