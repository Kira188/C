#include<stdio.h>
int main()
{
    int n,a=0,r;
    printf("enter the numebr: ");
    scanf("%d",&n);
    while(n>1)
    {
        r=n%10;
        a=a+(r*r*r);
        n=n/10;
    }
    
    printf("%d",a);
}