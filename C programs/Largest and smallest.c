#include <stdio.h>
int main()
{
    int num1=10,num2=20,num3=30,lg,sm;
    if(num1<num2)
    {
        lg=num2;
        sm=num1;
        if(num2<num3)
        {
            lg=num3;

        }
        else
        {
            lg=num2;
        }
    }
    else
    {
        lg=num1;
        if (num1<num3)
        {
            lg=num3;
        }
        else
        {
            lg=num1;
        }
        
    }
    printf("Largest number is %d",lg);
}