#include <stdio.h>
int main(){
    int a,i;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("number is not prime");
            return 0;
        }
    }
    printf("number is prime");

}