#include <stdio.h>
int main()
{
    int i=0,n,c=1,b=0;
    printf("enter n\n");
    scanf("%d",&n);
    printf("1 ");
    while(i<n-1)
    {
        c=c+b;
        b=c-b;
        printf("%d ",c);
        i++;
    }
}