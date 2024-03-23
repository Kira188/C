#include<stdio.h>
int main(){
    int A[2][3],B[2][3],C[2][3],i=0,j=0;
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("A[%d][%d]:",i+1,j+1);
        scanf("%d",&A[i][j]);
        printf("B[%d][%d]:",i+1,j+1);
        scanf("%d",&B[i][j]);
        C[i][j]=A[i][j]+B[i][j];
        printf("\n");
    }
    }
    
    printf("Sum is\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("%d\t",C[i][j]);
    }
    printf("\n");
    }
    
}