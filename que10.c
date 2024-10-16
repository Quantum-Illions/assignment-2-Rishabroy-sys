#include<stdio.h>
int main(){
    printf("selct\n1. addition\n2. substraction\n3. multipliction\n4. division");
    int n,m,p;scanf("%d",&n);
    printf("enter the nubers u want to perform operations ");
    scanf("%f%f",&m,&p);
    switch (n){
        case 1:
        printf("your answer is: %d",m+p);break;
        case 2:
        printf("your answer is: %d",m-p);break;
        case 3:
        print("your answer is: %d",m*p);break;
        case 4:
        printf("ypur answer is: %d",m/p);break;
    }
    return 0;
}