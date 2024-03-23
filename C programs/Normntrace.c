#include<stdio.h>
int main(){
    int i,j,A[3][3],norm[3]={0},trace=0,max=0;
    printf("enter elements to array one by one");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&A[i][j]); 
        }
    }
    printf("matrix entered is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",A[i][j]); 
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j){trace+=A[i][i];}
           norm[i]+=A[j][i];
        }
    }
    max=norm[0];
    for(i=0;i<3;i++)
    {
        if(max<norm[i])
        max=norm[i];
    }
    printf("Trace is %d\nNorm is %d",trace,max);
}