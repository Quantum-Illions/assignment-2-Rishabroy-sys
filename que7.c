#include<stdio.h>
int main(){
    printf("enter the num u want factorial");
    int m,pro=1;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
       pro*=i;
    }printf("the factorial is %d",pro);
    return 0;}     
