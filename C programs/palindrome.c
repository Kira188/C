#include<stdio.h>
int main(){
    int ult,num,rem,a;
    printf("enter the number: ");
    scanf("%d",&num);
    ult=num%10;
    while(num>0)
    {
        num=num/10;
        rem=num%10;
        if(num==0)
        {
            break;
        }
        else
        ult=ult*10+rem;
    }
    printf("%d",ult);
}