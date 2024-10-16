    #include<stdio.h>
int main(){int n;
    enum days {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
    switch(n){
        case 1:
        printf("monday");break;
        case 2:
        printf("tuesday");break;
        case 3:
        printf("wednesday");break;
        case 4:
        printf("thrusday");break;
        case 5:
        printf("friday");break;
        case 6:
        printf("satday");break;
        case 7:
        printf("sunday");break;
        default:
printf("Invalid choice");
        

    }
    return 0;}