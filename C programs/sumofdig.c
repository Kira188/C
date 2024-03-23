#include<stdio.h>
int main()
{
    int n,a=0,r;
    printf("enter the numebr: ");
    scanf("%d",&n);
    while(n>0 || a>9)
    {
        if(n==0)
        {
            n=a;
            a=0;
            
            
        }
        r=n%10;
        a=a+r;
       // printf("%d ",a);
        n=n/10;
    }
        printf("%d",a);
}