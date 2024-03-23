#include<stdio.h>
#include<string.h>
int main(){
    char a[80];
    FILE *fp,*fl;
    if((fp=fopen("Hello.txt","r"))==NULL)
    {
        printf("File did not open properly");
    }
    if((fl=fopen("New.txt","w"))==NULL)
    {
        printf("File did not open properly");
    }
    
    
        fgets(a,70,fp);
        puts(a);
    
    
    fclose(fl);
    fclose(fp);
    return 0;
}
