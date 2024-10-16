int main(){
    printf("enter the no. of student");
    int n,m,sum=0;scanf("%d",&n);
     for(int i=0;i<n;i++){
        printf("enter the marks");
        scanf("%f",&m);
        sum+=(m/n);
     }  printf("the average of class is %f",sum);
        return 0;}
