#include <stdio.h>
int main(){
    char a;
    int num1,num2;
    float ans;
    printf("Enter two numbers ");
    scanf("%d %d",&num1,&num2);
    printf("\nEnter the operator: ");
    scanf(" %c",&a);
    switch (a)
    {
        case '+': ans=num1+num2;
                printf("Sum is: %0.2f",ans);
                break;
        case '-': ans=num1-num2;
                printf("minus is: %0.2f",ans);
                break;
        default: printf("didnt work");
                break;
    }
    
}